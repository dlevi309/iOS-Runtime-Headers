/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class BRCProgress, NSMutableDictionary;

@interface _BRCTransferInfo : NSObject {

	BRCProgress* _progress;
	long long sumOfCompletedUnitCountDelta;
	long long sumOfTotalUnitCountDelta;
	NSMutableDictionary* _versionSizes;
	NSMutableDictionary* _childProgresses;
	NSMutableDictionary* _previousUnitCounts;

}

@property (nonatomic,readonly) BRCProgress * progress;                                //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long sumOfCompletedUnitCountDelta; 
@property (assign,nonatomic) long long sumOfTotalUnitCountDelta; 
@property (nonatomic,readonly) NSMutableDictionary * versionSizes;                    //@synthesize versionSizes=_versionSizes - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * childProgresses;                 //@synthesize childProgresses=_childProgresses - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * previousUnitCounts;              //@synthesize previousUnitCounts=_previousUnitCounts - In the implementation block
-(id)init;
-(id)description;
-(BRCProgress *)progress;
-(long long)sumOfCompletedUnitCountDelta;
-(long long)sumOfTotalUnitCountDelta;
-(void)setSumOfCompletedUnitCountDelta:(long long)arg1 ;
-(void)setSumOfTotalUnitCountDelta:(long long)arg1 ;
-(NSMutableDictionary *)versionSizes;
-(void)updateUnitCount;
-(void)updateLocalizedDescriptionWithOptions:(char)arg1 ;
-(void)copyProgressInfoToProgress:(id)arg1 options:(char)arg2 ;
-(void)verifyFutureProgressIsNotFinished;
-(NSMutableDictionary *)childProgresses;
-(NSMutableDictionary *)previousUnitCounts;
@end

