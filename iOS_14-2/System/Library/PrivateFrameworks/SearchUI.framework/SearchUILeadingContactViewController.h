/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUILeadingViewController.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@class SearchUIContactsThumbnailView, SearchUIImageView, NUIContainerBoxView, NSString;

@interface SearchUILeadingContactViewController : SearchUILeadingViewController <CNAvatarViewDelegate> {

	SearchUIContactsThumbnailView* _avatarView;
	SearchUIImageView* _appIconBadgeView;

}

@property (nonatomic,retain) NUIContainerBoxView * view; 
@property (nonatomic,retain) SearchUIContactsThumbnailView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) SearchUIImageView * appIconBadgeView;                    //@synthesize appIconBadgeView=_appIconBadgeView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRowModel:(id)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(void)updateWithContacts:(id)arg1 ;
-(SearchUIContactsThumbnailView *)avatarView;
-(id)setupView;
-(void)hide;
-(unsigned long long)type;
-(void)setAvatarView:(SearchUIContactsThumbnailView *)arg1 ;
-(id)contactsForPreviewInteractionForAvatarView:(id)arg1 suggestedKeysToFetch:(id)arg2 ;
-(void)willBeginPreviewInteractionForAvatarView:(id)arg1 ;
-(BOOL)shouldVerticallyCenter;
-(SearchUIImageView *)appIconBadgeView;
-(void)setAppIconBadgeView:(SearchUIImageView *)arg1 ;
-(void)setUsesCompactWidth:(BOOL)arg1 ;
@end

