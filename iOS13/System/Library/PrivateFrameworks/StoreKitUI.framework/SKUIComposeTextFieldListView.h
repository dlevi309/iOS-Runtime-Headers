/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SKUIComposeTextFieldListViewDelegate;
@class NSMutableArray, UIResponder;

@interface SKUIComposeTextFieldListView : UIView {

	id<SKUIComposeTextFieldListViewDelegate> _delegate;
	NSMutableArray* _fields;
	BOOL _isValid;
	long long _style;

}

@property (nonatomic,readonly) long long composeReviewStyle;                                        //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIComposeTextFieldListViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) UIResponder * initialFirstResponder; 
-(void)dealloc;
-(BOOL)isValid;
-(id<SKUIComposeTextFieldListViewDelegate>)delegate;
-(void)setDelegate:(id<SKUIComposeTextFieldListViewDelegate>)arg1 ;
-(double)height;
-(void)layoutSubviews;
-(void)reloadData;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(UIResponder *)initialFirstResponder;
-(id)textForFieldAtIndex:(unsigned long long)arg1 ;
-(long long)composeReviewStyle;
-(void)composeTextFieldValidityChanged:(id)arg1 ;
-(void)_updateValidity;
@end

