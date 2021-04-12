/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)didMoveToSuperview;
-(double)cornerRadius;
-(void)layoutSubviews;
-(void)setCornerRadius:(double)arg1 ;
-(id)_cachedKeyLineImageWithCornerRadius:(double)arg1 lineWidth:(double)arg2 ;
-(void)setKeyLineViewAlphaForProgress:(double)arg1 ;
@end

