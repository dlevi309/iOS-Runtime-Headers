/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_isToolbar;
-(void)addSubview:(id)arg1 ;
-(CGSize)_sizeFittingContentViews;
-(id)initWithFrame:(CGRect)arg1 inputView:(id)arg2 ;
-(void)_setToolbarBackgroundImage:(id)arg1 ;
-(unsigned long long)_unclippableCorners;
-(void)_setToolbarBackgroundViewWithImage:(id)arg1 ;
-(void)_updateCornerClipping;
-(void)set_unclippableCorners:(unsigned long long)arg1 ;
@end

