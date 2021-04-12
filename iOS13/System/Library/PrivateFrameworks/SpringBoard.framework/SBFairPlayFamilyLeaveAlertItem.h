/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@class FBSApplicationInfo;

@interface SBFairPlayFamilyLeaveAlertItem : SBAlertItem {

	FBSApplicationInfo* _appInfo;

}

@property (nonatomic,retain) FBSApplicationInfo * appInfo;              //@synthesize appInfo=_appInfo - In the implementation block
-(BOOL)dismissOnLock;
-(FBSApplicationInfo *)appInfo;
-(void)setAppInfo:(FBSApplicationInfo *)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(id)initWithAppInfo:(id)arg1 ;
@end

