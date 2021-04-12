/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BRCProgress *)progress;
-(id)init;
-(id)description;
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

