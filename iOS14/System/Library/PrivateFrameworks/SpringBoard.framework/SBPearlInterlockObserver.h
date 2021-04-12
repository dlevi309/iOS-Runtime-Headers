/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithBiometricResource:(id)arg1 ;
-(void)deactivate;
-(void)activate;
-(void)_fire;
-(void)biometricResource:(id)arg1 matchingEnabledDidChange:(BOOL)arg2 ;
-(void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2 ;
-(void)_checkForLockout;
@end

