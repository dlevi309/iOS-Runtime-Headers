/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class _ATXDuetHelper;

@interface _ATXAppLaunchSequenceAWDTracker : NSObject {

	_ATXDuetHelper* _duetHelper;
	double _sessionGapSeconds;
	double _sameLaunchGapSeconds;
	unsigned long long _maxLength;

}

@property (nonatomic,readonly) unsigned long long maxLength;              //@synthesize maxLength=_maxLength - In the implementation block
+(id)_defaultLaunchSequenceTimestampPath;
+(id)_randomlyClipSequence:(id)arg1 maxLength:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)maxLength;
-(id)_queryStartTime;
-(id)_readTimestamp;
-(void)_writeTimestamp:(id)arg1 ;
-(id)initWithMaxLength:(unsigned long long)arg1 sessionGapSeconds:(double)arg2 sameLaunchGapSeconds:(double)arg3 duetHelper:(id)arg4 ;
-(void)_emitAndResetLaunchSequenceBuffer:(id)arg1 ;
-(void)_addBundleId:(id)arg1 buffer:(id)arg2 ;
-(void)logSampledLaunchSequences;
-(void)postLaunchSequence:(id)arg1 ;
@end

