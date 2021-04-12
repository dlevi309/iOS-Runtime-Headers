/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_updateStatusBar;
-(void)_updateWetState;
-(void)_finishInit;
-(BOOL)isDetectionEnabled;
-(BOOL)isAccessoryPortWet;
-(BOOL)_showStatusBarIcon;
-(void)_stateDidUpdate;
-(BOOL)isLiquidDetected;
@end

