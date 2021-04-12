/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBHUDViewController.h>

@interface SBRotationLockHUDViewController : SBHUDViewController {

	BOOL _locked;

}

@property (assign,getter=isLocked,nonatomic) BOOL locked;              //@synthesize locked=_locked - In the implementation block
-(id)init;
-(void)setLocked:(BOOL)arg1 ;
-(BOOL)isLocked;
-(void)_updateLockedImage;
@end

