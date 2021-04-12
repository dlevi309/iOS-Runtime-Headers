/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@interface VUIFocusableCollectionViewCell : UICollectionViewCell {

	BOOL _allowsFocus;

}

@property (assign,nonatomic) BOOL allowsFocus;              //@synthesize allowsFocus=_allowsFocus - In the implementation block
-(BOOL)canBecomeFocused;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(BOOL)allowsFocus;
-(void)setAllowsFocus:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateBackgroundAndHighlightColor;
@end

