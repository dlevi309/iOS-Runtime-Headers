/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIActivityIndicatorView, NSString;

@interface CNFRegLoadingView : UIView {

	UILabel* _label;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,copy) NSString * message; 
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

