/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface _ATXMotion : NSObject {

	BOOL _stationary;
	long long _motiontype;

}

@property (nonatomic,readonly) long long motiontype;              //@synthesize motiontype=_motiontype - In the implementation block
@property (nonatomic,readonly) BOOL stationary;                   //@synthesize stationary=_stationary - In the implementation block
+(id)getMotionStringFromMotionType:(long long)arg1 ;
+(long long)_getMotionTypeFromCMMotionActivity:(id)arg1 ;
+(id)_getMotionStringFromCMMotionActivity:(id)arg1 ;
+(id)summarizeActivityStream:(id)arg1 ;
+(id)findMostCommonAndRecent:(id)arg1 identityFunc:(/*^block*/id)arg2 ;
-(BOOL)stationary;
-(id)print;
-(id)initFromCMMotionActivity:(id)arg1 ;
-(id)initWithMotionType:(long long)arg1 andStationary:(BOOL)arg2 ;
-(id)getMotionString;
-(long long)motiontype;
@end

