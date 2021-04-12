/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSLayoutConstraint, UILabel;

@interface _VideosExtrasMainMenuItemCollectionViewCell : UICollectionViewCell {

	NSLayoutConstraint* _textLabelConstraint;
	UILabel* _textLabel;

}

@property (nonatomic,retain) NSLayoutConstraint * textLabelConstraint;              //@synthesize textLabelConstraint=_textLabelConstraint - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                 //@synthesize textLabel=_textLabel - In the implementation block
+(id)_createLabelInCell:(id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)safeAreaInsetsDidChange;
-(void)setSelected:(BOOL)arg1 ;
-(UILabel *)textLabel;
-(void)_dynamicTypeChanged;
-(void)setTextLabelConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textLabelConstraint;
@end

