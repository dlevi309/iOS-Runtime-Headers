/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIKBKeyView;

@interface _UIUCBKBSelectionBackground : UIView {

	UIKBKeyView* _backgroundProvidingView;
	BOOL _showButtonShape;

}

@property (assign,nonatomic) BOOL showButtonShape;              //@synthesize showButtonShape=_showButtonShape - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setShowButtonShape:(BOOL)arg1 ;
-(void)_updateBackgroundProvidingView;
-(id)_makeBackgroundView;
-(BOOL)showButtonShape;
@end

