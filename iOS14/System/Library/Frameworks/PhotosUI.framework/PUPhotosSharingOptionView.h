/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <libobjc.A.dylib/PXUIAssetBadgeViewDelegate.h>

@class PXUIAssetBadgeView, NSString;

@interface PUPhotosSharingOptionView : UICollectionReusableView <PXUIAssetBadgeViewDelegate> {

	PXUIAssetBadgeView* _toggleGlyphButton;
	id _target;
	SEL _action;
	BOOL _interactive;
	BOOL _toggled;

}

@property (assign,getter=isInteractive,nonatomic) BOOL interactive;              //@synthesize interactive=_interactive - In the implementation block
@property (assign,getter=isToggled,nonatomic) BOOL toggled;                      //@synthesize toggled=_toggled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isInteractive;
-(void)layoutSubviews;
-(void)setInteractive:(BOOL)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setToggled:(BOOL)arg1 ;
-(BOOL)isToggled;
-(void)assetBadgeView:(id)arg1 userDidSelectBadges:(unsigned long long)arg2 ;
@end

