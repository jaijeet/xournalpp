/*
 * Xournal++
 *
 * Autosave job
 *
 * @author Xournal Team
 * http://xournal.sf.net
 *
 * @license GPL
 */

#ifndef __AUTOSAVEJOB_H__
#define __AUTOSAVEJOB_H__

#include "Job.h"
#include "../../util/String.h"

class Control;

class AutosaveJob: public Job {
public:
	AutosaveJob(Control * control);
	virtual ~AutosaveJob();

public:
	virtual void run();
	void afterRun();

	virtual JobType getType();


private:
	Control * control;
	String error;
};

#endif /* __AUTOSAVEJOB_H__ */
