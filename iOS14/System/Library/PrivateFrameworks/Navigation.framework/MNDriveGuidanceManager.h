/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNClassicGuidanceManager.h>

@interface MNDriveGuidanceManager : MNClassicGuidanceManager {

	int _currentContinuePhase;

}
-(int)transportType;
-(void)_resetStepState;
-(id)_nameInfoForContinueSign;
-(void)_updatePrepareForNextStep;
-(BOOL)_updateConsiderContinueAnnouncement:(id)arg1 location:(id)arg2 ;
-(BOOL)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2 ;
-(BOOL)_updateConsiderPrepareAnnouncement:(id)arg1 withMatch:(id)arg2 ;
-(double)_distanceForSign;
-(int)_continuePhase;
-(const SCD_Struct_MN16*)_announceSettings;
@end

