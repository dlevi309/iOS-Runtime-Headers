/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@interface VUIFocusableCollectionViewCell : UICollectionViewCell {

	BOOL _allowsFocus;

}

@property (assign,nonatomic) BOOL allowsFocus;              //@synthesize allowsFocus=_allowsFocus - In the implementation block
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)allowsFocus;
-(void)setAllowsFocus:(BOOL)arg1 ;
@end

