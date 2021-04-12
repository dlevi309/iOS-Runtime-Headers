/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<TPSimpleNumberPadDelegate>)delegate;
-(void)setDelegate:(id<TPSimpleNumberPadDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShowsDeleteButton:(BOOL)arg1 ;
-(void)buttonUp:(id)arg1 ;
-(void)_updateDeleteButton;
-(id)initWithButtons:(id)arg1 ;
-(Class)numberPadButtonClass;
-(void)setNumberButtonsEnabled:(BOOL)arg1 ;
-(void)_deleteButtonClicked:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)showsDeleteButton;
@end

