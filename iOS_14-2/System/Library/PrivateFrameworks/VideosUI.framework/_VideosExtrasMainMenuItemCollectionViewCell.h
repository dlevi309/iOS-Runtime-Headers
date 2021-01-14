/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)safeAreaInsetsDidChange;
-(UILabel *)textLabel;
-(void)dealloc;
-(void)_dynamicTypeChanged;
-(void)setTextLabelConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textLabelConstraint;
@end

