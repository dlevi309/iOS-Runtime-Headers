/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/


@interface ATXMotion : NSObject {

	BOOL _stationary;
	BOOL _canPredictClipsGivenRecentMotion;
	long long _motiontype;

}

@property (nonatomic,readonly) long long motiontype;                               //@synthesize motiontype=_motiontype - In the implementation block
@property (nonatomic,readonly) BOOL stationary;                                    //@synthesize stationary=_stationary - In the implementation block
@property (nonatomic,readonly) BOOL canPredictClipsGivenRecentMotion;              //@synthesize canPredictClipsGivenRecentMotion=_canPredictClipsGivenRecentMotion - In the implementation block
+(BOOL)canPredictClipsForActivityStream:(id)arg1 ;
+(id)_getMotionStringFromCMMotionActivity:(id)arg1 ;
+(id)summarizeActivityStream:(id)arg1 ;
+(id)getMotionStringFromMotionType:(long long)arg1 ;
+(long long)_getMotionTypeFromCMMotionActivity:(id)arg1 ;
+(id)findMostCommonAndRecent:(id)arg1 identityFunc:(/*^block*/id)arg2 ;
-(BOOL)stationary;
-(long long)motiontype;
-(id)initWithMotionType:(long long)arg1 stationary:(BOOL)arg2 canPredictClipsGivenRecentMotion:(BOOL)arg3 ;
-(id)initFromCMMotionActivity:(id)arg1 ;
-(id)print;
-(BOOL)canPredictClipsGivenRecentMotion;
-(id)initFromCMMotionActivity:(id)arg1 canPredictClipsGivenRecentMotion:(BOOL)arg2 ;
-(id)getMotionString;
@end

