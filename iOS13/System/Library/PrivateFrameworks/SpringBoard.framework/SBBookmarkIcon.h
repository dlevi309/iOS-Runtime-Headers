/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardHome/SBLeafIcon.h>

@class SBBookmark, UIWebClip, NSURL;

@interface SBBookmarkIcon : SBLeafIcon {

	SBBookmark* _bookmark;

}

@property (nonatomic,readonly) SBBookmark * bookmark;                               //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) UIWebClip * webClip; 
@property (nonatomic,readonly) NSURL * launchURL; 
@property (nonatomic,readonly) BOOL displaysShareBookmarkShortcutItem; 
@property (nonatomic,readonly) BOOL representsWebApp; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(SBBookmark *)bookmark;
-(NSURL *)launchURL;
-(id)initWithBookmark:(id)arg1 ;
-(UIWebClip *)webClip;
-(id)representedSceneIdentifier;
-(BOOL)displaysShareBookmarkShortcutItem;
-(id)folderTitleOptions;
-(id)folderFallbackTitle;
-(BOOL)isBookmarkIcon;
-(BOOL)representsWebApp;
-(id)applicationToLaunch;
-(BOOL)_isSaneURL;
@end

