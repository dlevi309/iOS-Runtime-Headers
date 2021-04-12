/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBLiquidDetectionManager : NSObject {

	int _wetToken;
	BOOL _finishedInit;
	BOOL _detectionEnabled;
	BOOL _accessoryPortWet;

}

@property (getter=isAccessoryPortWet,nonatomic,readonly) BOOL accessoryPortWet;              //@synthesize accessoryPortWet=_accessoryPortWet - In the implementation block
@property (getter=isDetectionEnabled,nonatomic,readonly) BOOL detectionEnabled;              //@synthesize detectionEnabled=_detectionEnabled - In the implementation block
@property (getter=isLiquidDetected,nonatomic,readonly) BOOL liquidDetected; 
+(id)sharedInstance;
+(BOOL)showStatusBarIcon;
-(id)succinctDescription;
-(void)_updateWetState;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)_showStatusBarIcon;
-(BOOL)isDetectionEnabled;
-(id)description;
-(void)_finishInit;
-(void)_updateStatusBar;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)isLiquidDetected;
-(void)_stateDidUpdate;
-(BOOL)isAccessoryPortWet;
-(void)dealloc;
@end

