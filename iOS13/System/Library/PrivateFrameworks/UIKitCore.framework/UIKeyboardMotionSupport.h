/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIScreenBasedObject.h>

@protocol UISplitKeyboardSource;
@class UIScreen, UIWindowScene, NSString, NSDictionary;

@interface UIKeyboardMotionSupport : NSObject <_UIScreenBasedObject> {

	UIScreen* _screen;
	UIWindowScene* _canvas;
	id<UISplitKeyboardSource> _controller;

}

@property (assign,nonatomic) id<UISplitKeyboardSource> masterController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) UIScreen * _intendedScreen; 
@property (readonly) NSDictionary * _options; 
+(id)supportForScreen:(id)arg1 ;
+(id)supportForUIScene:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)_options;
-(id)_initWithScreen:(id)arg1 options:(id)arg2 ;
-(BOOL)_matchingOptions:(id)arg1 ;
-(UIScreen *)_intendedScreen;
-(void)setMasterController:(id<UISplitKeyboardSource>)arg1 ;
-(id<UISplitKeyboardSource>)masterController;
-(void)_updatedController;
-(void)_disconnectingController:(id)arg1 ;
-(void)_connectController:(id)arg1 ;
-(id)_initWithCanvas:(id)arg1 options:(id)arg2 ;
-(id)_intendedCanvas;
@end

