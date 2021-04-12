/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@class FBSApplicationInfo;

@interface SBFairPlayFamilyLeaveAlertItem : SBAlertItem {

	FBSApplicationInfo* _appInfo;

}

@property (nonatomic,retain) FBSApplicationInfo * appInfo;              //@synthesize appInfo=_appInfo - In the implementation block
-(void)setAppInfo:(FBSApplicationInfo *)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(FBSApplicationInfo *)appInfo;
-(BOOL)dismissOnLock;
-(id)initWithAppInfo:(id)arg1 ;
@end

