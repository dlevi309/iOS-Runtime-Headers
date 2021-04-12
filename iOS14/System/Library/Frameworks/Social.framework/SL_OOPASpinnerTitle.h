/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/Social-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIActivityIndicatorView, NSString;

@interface SL_OOPASpinnerTitle : UIView {

	UILabel* _titleView;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,copy) NSString * title; 
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)startAnimating;
-(void)stopAnimating;
-(NSString *)title;
-(void)dealloc;
@end

