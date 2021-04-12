/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPNumberPad.h>

@protocol TPSimpleNumberPadDelegate;
@class UIButton;

@interface TPSimpleNumberPad : TPNumberPad {

	UIButton* _deleteButton;
	BOOL _showsDeleteButton;
	id<TPSimpleNumberPadDelegate> _delegate;

}

@property (assign) id<TPSimpleNumberPadDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsDeleteButton;                    //@synthesize showsDeleteButton=_showsDeleteButton - In the implementation block
+(id)_numberPadCharacters;
-(void)setShowsDeleteButton:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<TPSimpleNumberPadDelegate>)delegate;
-(void)_updateDeleteButton;
-(void)buttonUp:(id)arg1 ;
-(void)setDelegate:(id<TPSimpleNumberPadDelegate>)arg1 ;
-(id)initWithButtons:(id)arg1 ;
-(BOOL)showsDeleteButton;
-(Class)numberPadButtonClass;
-(void)setNumberButtonsEnabled:(BOOL)arg1 ;
-(void)_deleteButtonClicked:(id)arg1 withEvent:(id)arg2 ;
@end

