/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView;

@interface CPSRatingView : UIView {

	UIStackView* _stackView;

}

@property (nonatomic,retain) UIStackView * stackView;              //@synthesize stackView=_stackView - In the implementation block
-(CGSize)intrinsicContentSize;
-(UIStackView *)stackView;
-(void)setStackView:(UIStackView *)arg1 ;
-(id)initWithInformationItem:(id)arg1 layout:(long long)arg2 ;
@end

