/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBIPhotoLaunchDeniedAlertItem : SBAlertItem {

	BOOL _offersMigration;

}

@property (assign,nonatomic) BOOL offersMigration;              //@synthesize offersMigration=_offersMigration - In the implementation block
-(BOOL)dismissOnLock;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)ignoreIfAlreadyDisplaying;
-(void)setOffersMigration:(BOOL)arg1 ;
-(BOOL)offersMigration;
@end

