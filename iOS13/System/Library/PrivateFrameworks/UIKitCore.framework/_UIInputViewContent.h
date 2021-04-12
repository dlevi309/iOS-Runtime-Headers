/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIInputView;

@interface _UIInputViewContent : UIView {

	double _contentHeight;
	double _contentWidth;
	UIInputView* _inputView;
	unsigned long long _unclippableCorners;

}

@property (assign,nonatomic) unsigned long long _unclippableCorners;              //@synthesize unclippableCorners=_unclippableCorners - In the implementation block
-(CGSize)_contentSize;
-(void)addSubview:(id)arg1 ;
-(BOOL)_isToolbar;
-(CGSize)_sizeFittingContentViews;
-(id)initWithFrame:(CGRect)arg1 inputView:(id)arg2 ;
-(void)_setToolbarBackgroundImage:(id)arg1 ;
-(void)_setToolbarBackgroundViewWithImage:(id)arg1 ;
-(void)_updateCornerClipping;
-(unsigned long long)_unclippableCorners;
-(void)set_unclippableCorners:(unsigned long long)arg1 ;
@end

