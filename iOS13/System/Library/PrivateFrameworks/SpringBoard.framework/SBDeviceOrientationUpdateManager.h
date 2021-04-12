/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol BSInvalidatable;
@class NSMutableSet;

@interface SBDeviceOrientationUpdateManager : NSObject {

	NSMutableSet* _deferralAssertions;
	BOOL _deviceOrientationIsDirty;
	id<BSInvalidatable> _stateCaptureHandle;
	long long _lastUpdatedDeviceOrientation;

}

@property (getter=isCurrentlyDeferringOrientationUpdates,nonatomic,readonly) BOOL currentlyDeferringOrientationUpdates; 
@property (assign,nonatomic) long long lastUpdatedDeviceOrientation;                                                                 //@synthesize lastUpdatedDeviceOrientation=_lastUpdatedDeviceOrientation - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)deviceOrientationUpdateDeferralAssertionWithReason:(id)arg1 ;
-(void)setLastUpdatedDeviceOrientation:(long long)arg1 ;
-(BOOL)isCurrentlyDeferringOrientationUpdates;
-(long long)lastUpdatedDeviceOrientation;
-(BOOL)_deviceOrientationUpdateNeededForOrientation:(long long)arg1 ;
-(void)_enqueueOrientationUpdateToDeviceOrientation:(long long)arg1 ;
-(void)_endDeferringOrientationUpdatesForAssertion:(id)arg1 ;
@end

