/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(const SCD_Struct_MN22*)_announceSettings;
@end

