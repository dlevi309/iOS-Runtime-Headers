/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol BSInvalidatable;
@class NSHashTable;

@interface SBDeviceOrientationUpdateManager : NSObject {

	NSHashTable* _deferralAssertions;
	BOOL _deviceOrientationIsDirty;
	id<BSInvalidatable> _stateCaptureHandle;
	long long _lastUpdatedDeviceOrientation;

}

@property (getter=isCurrentlyDeferringOrientationUpdates,nonatomic,readonly) BOOL currentlyDeferringOrientationUpdates; 
@property (assign,nonatomic) long long lastUpdatedDeviceOrientation;                                                                 //@synthesize lastUpdatedDeviceOrientation=_lastUpdatedDeviceOrientation - In the implementation block
-(id)deviceOrientationUpdateDeferralAssertionWithReason:(id)arg1 ;
-(id)succinctDescription;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)_deviceOrientationUpdateNeededForOrientation:(long long)arg1 ;
-(id)description;
-(void)_endDeferringOrientationUpdatesForAssertion:(id)arg1 ;
-(BOOL)isCurrentlyDeferringOrientationUpdates;
-(void)_enqueueOrientationUpdateToDeviceOrientation:(long long)arg1 ;
-(void)setLastUpdatedDeviceOrientation:(long long)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(long long)lastUpdatedDeviceOrientation;
@end

