/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _UIUCBKBSelectionBackground : UIView {

	UIView* _backgroundProvidingView;
	BOOL _showButtonShape;

}

@property (assign,nonatomic) BOOL showButtonShape;              //@synthesize showButtonShape=_showButtonShape - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_updateBackgroundProvidingView;
-(BOOL)showButtonShape;
-(void)setShowButtonShape:(BOOL)arg1 ;
@end

