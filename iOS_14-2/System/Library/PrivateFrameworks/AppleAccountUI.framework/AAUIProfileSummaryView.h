/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface AAUIProfileSummaryView : UIView {

	UIImageView* _profileImageView;
	UILabel* _nameLabel;
	UILabel* _emailLabel;
	BOOL _hidesPhoto;
	double _topPadding;

}

@property (assign,nonatomic) BOOL hidesPhoto;                //@synthesize hidesPhoto=_hidesPhoto - In the implementation block
@property (assign,nonatomic) double topPadding;              //@synthesize topPadding=_topPadding - In the implementation block
+(double)desiredHeight;
-(double)topPadding;
-(void)layoutSubviews;
-(void)setTopPadding:(double)arg1 ;
-(id)initWithName:(id)arg1 email:(id)arg2 image:(id)arg3 ;
-(void)setHidesPhoto:(BOOL)arg1 ;
-(BOOL)hidesPhoto;
@end

