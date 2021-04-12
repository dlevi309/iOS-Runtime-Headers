/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/Social-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, NSMutableArray, UILabel, NSString;

@interface SLSheetTitleView : UIView {

	UIImageView* _serviceIconView;
	NSMutableArray* _constraints;
	UILabel* _titleLabel;
	NSString* _title;

}

@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)updateConstraints;
-(void)setServiceIconImage:(id)arg1 ;
-(void)_setupTitleLabel;
@end

