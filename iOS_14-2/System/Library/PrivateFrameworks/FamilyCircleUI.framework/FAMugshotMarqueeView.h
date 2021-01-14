/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <FamilyCircleUI/FamilyCircleUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableDictionary, FAProfilePictureStore, UIStackView;

@interface FAMugshotMarqueeView : UIView {

	NSMutableDictionary* _memberPhotoMap;
	FAProfilePictureStore* _pictureStore;
	UIStackView* _marquee;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_configureStackView;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)_configureMarquee;
-(void)_profilePictureStoreDidReloadImages:(id)arg1 ;
-(id)_configureImageWithData:(id)arg1 ;
-(id)_configureImageViewWithImage:(id)arg1 ;
-(id)initWithFamilyCircle:(id)arg1 profilePictureStore:(id)arg2 ;
@end

