/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CAMFullscreenModeSelectorDataSource, CAMFullscreenModeSelectorDelegate;
@class NSArray, NSDictionary, UIView, NSString;

@interface CAMFullscreenModeSelector : UIView <UIGestureRecognizerDelegate> {

	id<CAMFullscreenModeSelectorDataSource> _dataSource;
	id<CAMFullscreenModeSelectorDelegate> _delegate;
	long long _selectedMode;
	NSArray* __modes;
	NSDictionary* __titleViewsByMode;
	UIView* __titleContainer;
	long long __state;
	double __touchBeganTime;
	long long __highlightedIndex;
	CGPoint __touchBeganPosition;

}

@property (setter=_setModes:,nonatomic,retain) NSArray * _modes;                                      //@synthesize _modes=__modes - In the implementation block
@property (setter=_setItems:,nonatomic,retain) NSDictionary * _titleViewsByMode;                      //@synthesize _titleViewsByMode=__titleViewsByMode - In the implementation block
@property (nonatomic,readonly) UIView * _titleContainer;                                              //@synthesize _titleContainer=__titleContainer - In the implementation block
@property (assign,setter=_setState:,nonatomic) long long _state;                                      //@synthesize _state=__state - In the implementation block
@property (assign,setter=_setTouchBeganTime:,nonatomic) double _touchBeganTime;                       //@synthesize _touchBeganTime=__touchBeganTime - In the implementation block
@property (assign,setter=_setTouchBeganPosition:,nonatomic) CGPoint _touchBeganPosition;              //@synthesize _touchBeganPosition=__touchBeganPosition - In the implementation block
@property (assign,setter=_setHighlightedIndex:,nonatomic) long long _highlightedIndex;                //@synthesize _highlightedIndex=__highlightedIndex - In the implementation block
@property (nonatomic,readonly) double _titleIndexOffset; 
@property (assign,nonatomic) id<CAMFullscreenModeSelectorDataSource> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) id<CAMFullscreenModeSelectorDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long selectedMode;                                                  //@synthesize selectedMode=_selectedMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CAMFullscreenModeSelectorDelegate>)delegate;
-(void)setDelegate:(id<CAMFullscreenModeSelectorDelegate>)arg1 ;
-(long long)_state;
-(id<CAMFullscreenModeSelectorDataSource>)dataSource;
-(void)setDataSource:(id<CAMFullscreenModeSelectorDataSource>)arg1 ;
-(void)_setState:(long long)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(UIView *)_titleContainer;
-(void)_updateAlpha;
-(void)_setItems:(id)arg1 ;
-(long long)_highlightedIndex;
-(NSArray *)_modes;
-(void)_updateTitles;
-(void)handlePress:(id)arg1 ;
-(void)setSelectedMode:(long long)arg1 ;
-(long long)selectedMode;
-(NSDictionary *)_titleViewsByMode;
-(void)_setModes:(id)arg1 ;
-(id)_modeTitleForLegacyTitle:(id)arg1 ;
-(void)_setHighlightedIndex:(long long)arg1 ;
-(void)_setSelectedMode:(long long)arg1 shouldNotify:(BOOL)arg2 ;
-(double)_titleIndexOffset;
-(void)_touchSequenceBeganAtPoint:(CGPoint)arg1 ;
-(void)_touchSequenceChangedToPoint:(CGPoint)arg1 ;
-(void)_touchSequenceEndedAtPoint:(CGPoint)arg1 ;
-(void)_setTouchBeganTime:(double)arg1 ;
-(void)_setTouchBeganPosition:(CGPoint)arg1 ;
-(long long)_titleIndexForY:(double)arg1 ;
-(double)_touchBeganTime;
-(CGPoint)_touchBeganPosition;
-(void)_selectModeAtIndex:(long long)arg1 ;
-(double)_titleYForIndex:(long long)arg1 ;
-(void)enterTappableState;
@end

