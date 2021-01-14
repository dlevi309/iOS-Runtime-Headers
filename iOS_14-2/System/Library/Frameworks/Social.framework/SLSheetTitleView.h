/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)_setupTitleLabel;
-(void)sizeToFit;
-(NSString *)title;
-(void)setServiceIconImage:(id)arg1 ;
@end

