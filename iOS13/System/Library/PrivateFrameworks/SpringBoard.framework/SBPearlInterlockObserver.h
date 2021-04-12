/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBUIBiometricResourceObserver.h>

@protocol SBUIBiometricResource;
@class NSString;

@interface SBPearlInterlockObserver : NSObject <SBUIBiometricResourceObserver> {

	id<SBUIBiometricResource> _biometricResource;
	BOOL _fired;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activate;
-(void)deactivate;
-(void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2 ;
-(void)biometricResource:(id)arg1 matchingEnabledDidChange:(BOOL)arg2 ;
-(void)_fire;
-(id)initWithBiometricResource:(id)arg1 ;
-(void)_checkForLockout;
@end

