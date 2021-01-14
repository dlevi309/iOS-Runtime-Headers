/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIScreenBasedObject.h>

@protocol UISplitKeyboardSource;
@class UIScreen, UIWindowScene, NSDictionary, NSString;

@interface UIKeyboardMotionSupport : NSObject <_UIScreenBasedObject> {

	UIScreen* _screen;
	UIWindowScene* _canvas;
	id<UISplitKeyboardSource> _controller;

}

@property (assign,nonatomic) id<UISplitKeyboardSource> masterController; 
@property (readonly) UIScreen * _intendedScreen; 
@property (readonly) NSDictionary * _options; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportForUIScene:(id)arg1 ;
+(id)supportForScreen:(id)arg1 ;
-(UIScreen *)_intendedScreen;
-(id)_initWithScreen:(id)arg1 options:(id)arg2 ;
-(id)_intendedCanvas;
-(id)_initWithCanvas:(id)arg1 options:(id)arg2 ;
-(BOOL)_matchingOptions:(id)arg1 ;
-(NSDictionary *)_options;
-(void)_updatedController;
-(void)_disconnectingController:(id)arg1 ;
-(void)_connectController:(id)arg1 ;
-(void)setMasterController:(id<UISplitKeyboardSource>)arg1 ;
-(id<UISplitKeyboardSource>)masterController;
-(void)dealloc;
@end

