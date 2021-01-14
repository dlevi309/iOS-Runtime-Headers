/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface PUReviewScreenDoneButton : UIButton {

	BOOL __needsUpdate;
	unsigned long long _preferredStyle;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (assign,nonatomic) BOOL _needsUpdate;                              //@synthesize _needsUpdate=__needsUpdate - In the implementation block
@property (assign,nonatomic) unsigned long long preferredStyle;              //@synthesize preferredStyle=_preferredStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
+(id)doneButton;
-(unsigned long long)preferredStyle;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIEdgeInsets)tappableEdgeInsets;
-(UIEdgeInsets)alignmentRectInsets;
-(void)_updateIfNeeded;
-(void)set_needsUpdate:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)_needsUpdate;
-(void)setPreferredStyle:(unsigned long long)arg1 ;
@end

