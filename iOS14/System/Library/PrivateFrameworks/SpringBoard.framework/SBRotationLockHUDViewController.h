/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBHUDViewController.h>

@interface SBRotationLockHUDViewController : SBHUDViewController {

	BOOL _locked;

}

@property (assign,getter=isLocked,nonatomic) BOOL locked;              //@synthesize locked=_locked - In the implementation block
-(BOOL)isLocked;
-(id)init;
-(void)setLocked:(BOOL)arg1 ;
-(void)_updateLockedImage;
@end

