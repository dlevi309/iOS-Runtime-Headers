/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray;

@interface PKLinkedAppUserRatingView : UIView {

	NSMutableArray* _starViews;
	float _userRating;

}

@property (assign,nonatomic) float userRating;              //@synthesize userRating=_userRating - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(float)userRating;
-(void)setUserRating:(float)arg1 ;
-(id)_starImageViewWithImage:(id)arg1 ;
@end

