/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardHome/SBLeafIcon.h>

@class SBBookmark, UIWebClip, NSURL;

@interface SBBookmarkIcon : SBLeafIcon {

	SBBookmark* _bookmark;

}

@property (nonatomic,retain) SBBookmark * bookmark;                                 //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) UIWebClip * webClip; 
@property (nonatomic,readonly) NSURL * launchURL; 
@property (nonatomic,readonly) BOOL displaysShareBookmarkShortcutItem; 
@property (nonatomic,readonly) BOOL representsWebApp; 
-(void)setBookmark:(SBBookmark *)arg1 ;
-(SBBookmark *)bookmark;
-(id)folderTitleOptions;
-(id)iTunesCategoriesOrderedByRelevancy;
-(BOOL)displaysShareBookmarkShortcutItem;
-(id)uninstallAlertBody;
-(UIWebClip *)webClip;
-(id)uninstallAlertTitle;
-(id)draggingUserActivity;
-(BOOL)canBeAddedToSubfolder;
-(id)_sbhIconLibraryOverrideCollationSectionTitle;
-(id)folderFallbackTitle;
-(NSURL *)launchURL;
-(id)initWithBookmark:(id)arg1 ;
-(BOOL)canBeAddedToMultiItemDrag;
-(id)representedSceneIdentifier;
-(BOOL)isBookmarkIcon;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)applicationToLaunch;
-(BOOL)representsWebApp;
@end

