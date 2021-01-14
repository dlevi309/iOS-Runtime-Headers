/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBindingTap.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString;

@interface OKActionBindingFocusTap : OKActionBindingTap <UIGestureRecognizerDelegate> {

	unsigned long long _mode;
	BOOL _focusInEnabled;
	BOOL _focusOutEnabled;

}

@property (assign,nonatomic) unsigned long long mode;               //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL focusInEnabled;                   //@synthesize focusInEnabled=_focusInEnabled - In the implementation block
@property (assign,nonatomic) BOOL focusOutEnabled;                  //@synthesize focusOutEnabled=_focusOutEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)unload;
-(unsigned long long)mode;
-(id)settingObjectForKey:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(void)setMode:(unsigned long long)arg1 ;
-(void)handleTap:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)performAction:(id)arg1 ;
-(void)dealloc;
-(void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(BOOL)ownsGestureRecognizer:(id)arg1 ;
-(void)setFocusInEnabled:(BOOL)arg1 ;
-(void)setFocusOutEnabled:(BOOL)arg1 ;
-(BOOL)focusInEnabled;
-(BOOL)focusOutEnabled;
@end

