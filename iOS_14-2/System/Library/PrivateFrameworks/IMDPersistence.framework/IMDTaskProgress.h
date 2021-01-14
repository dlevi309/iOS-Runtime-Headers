/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)totalCount;
-(NSString *)taskName;
-(void)dealloc;
-(id)initWithTaskName:(id)arg1 totalCount:(unsigned long long)arg2 ;
-(void)startTrackingTime;
-(void)updateWithCompletedCount:(unsigned long long)arg1 ;
@end

