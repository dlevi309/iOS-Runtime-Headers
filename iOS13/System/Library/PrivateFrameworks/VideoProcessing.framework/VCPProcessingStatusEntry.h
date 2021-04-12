/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class NSString, NSDate;

@interface VCPProcessingStatusEntry : NSObject {

	unsigned long long _taskID;
	NSString* _localIdentifier;
	unsigned long long _status;
	unsigned long long _attempts;
	NSDate* _nextRetryDate;

}

@property (nonatomic,readonly) unsigned long long taskID;                //@synthesize taskID=_taskID - In the implementation block
@property (nonatomic,readonly) NSString * localIdentifier;               //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long status;                //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned long long attempts;              //@synthesize attempts=_attempts - In the implementation block
@property (nonatomic,readonly) NSDate * nextRetryDate;                   //@synthesize nextRetryDate=_nextRetryDate - In the implementation block
+(id)entryWithLocalIdentifier:(id)arg1 andTaskID:(unsigned long long)arg2 andStatus:(unsigned long long)arg3 andAttempts:(unsigned long long)arg4 andNextRetryDate:(id)arg5 ;
-(unsigned long long)status;
-(NSString *)localIdentifier;
-(unsigned long long)taskID;
-(unsigned long long)attempts;
-(id)initWithLocalIdentifier:(id)arg1 andTaskID:(unsigned long long)arg2 andStatus:(unsigned long long)arg3 andAttempts:(unsigned long long)arg4 andNextRetryDate:(id)arg5 ;
-(NSDate *)nextRetryDate;
@end

