/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(id<SKUIComposeTextFieldListViewDelegate>)delegate;
-(double)height;
-(void)setDelegate:(id<SKUIComposeTextFieldListViewDelegate>)arg1 ;
-(void)_updateValidity;
-(void)layoutSubviews;
-(BOOL)isValid;
-(void)reloadData;
-(void)dealloc;
-(UIResponder *)initialFirstResponder;
-(id)textForFieldAtIndex:(unsigned long long)arg1 ;
-(long long)composeReviewStyle;
-(void)composeTextFieldValidityChanged:(id)arg1 ;
@end

