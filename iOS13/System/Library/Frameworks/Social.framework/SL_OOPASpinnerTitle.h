/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)startAnimating;
-(void)stopAnimating;
@end

