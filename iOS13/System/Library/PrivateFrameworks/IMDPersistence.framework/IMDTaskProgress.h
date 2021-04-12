/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
*/


@class NSDateComponentsFormatter, NSString;

@interface IMDTaskProgress : NSObject {

	unsigned long long _lastPercentComplete;
	double _startTime;
	NSDateComponentsFormatter* _intervalFormatter;
	NSString* _taskName;
	unsigned long long _totalCount;

}

@property (nonatomic,readonly) NSString * taskName;                        //@synthesize taskName=_taskName - In the implementation block
@property (nonatomic,readonly) unsigned long long totalCount;              //@synthesize totalCount=_totalCount - In the implementation block
-(void)dealloc;
-(unsigned long long)totalCount;
-(NSString *)taskName;
-(id)initWithTaskName:(id)arg1 totalCount:(unsigned long long)arg2 ;
-(void)startTrackingTime;
-(void)updateWithCompletedCount:(unsigned long long)arg1 ;
@end

