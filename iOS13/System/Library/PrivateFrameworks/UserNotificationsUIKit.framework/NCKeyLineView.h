/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIImageView.h>

@interface NCKeyLineView : UIImageView {

	double _cornerRadius;
	double _lineWidth;

}

@property (assign,nonatomic) double cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double lineWidth;                 //@synthesize lineWidth=_lineWidth - In the implementation block
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(double)cornerRadius;
-(id)_cachedKeyLineImageWithCornerRadius:(double)arg1 lineWidth:(double)arg2 ;
-(void)setKeyLineViewAlphaForProgress:(double)arg1 ;
@end

