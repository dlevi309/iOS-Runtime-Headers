/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
*/


@interface ECS.Scheduler : _UKNOWN_SUPERCLASS_ {

	 entityManager;
	 lock;
	 currentJobID;
	 recurrentJobs;
	 orderedRecurrentJobs;
	 remainingJobsForThisFrame;
	 pendingJobsToEnqueueForThisFrame;
	 pendingJobsToEnqueueForThisFrameOnly;
	 groupsToUnregister;
	 needsRescheduling;
	 needsReschedulingForThisFrame;
	 dependenciesByJob;
	 schedulerEventsRecordedDuringLastFrame;
	 queriesRecordedDuringLastFrame;
	 schedulerEventsRecordedDuringThisFrame;
	 queriesRecordedDuringThisFrame;
	 simulationTimeScale;

}
@end

