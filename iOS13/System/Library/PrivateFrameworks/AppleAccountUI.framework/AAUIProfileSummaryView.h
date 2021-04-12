/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(double)topPadding;
-(id)initWithName:(id)arg1 email:(id)arg2 image:(id)arg3 ;
-(void)setHidesPhoto:(BOOL)arg1 ;
-(BOOL)hidesPhoto;
-(void)setTopPadding:(double)arg1 ;
@end

