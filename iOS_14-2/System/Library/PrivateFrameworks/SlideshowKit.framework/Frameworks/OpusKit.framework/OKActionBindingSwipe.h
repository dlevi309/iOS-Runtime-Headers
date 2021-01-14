/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBinding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UISwipeGestureRecognizer, NSString;

@interface OKActionBindingSwipe : OKActionBinding <UIGestureRecognizerDelegate> {

	unsigned long long _numberOfTouchesRequired;
	unsigned long long _direction;
	UISwipeGestureRecognizer* _swipeGestureRecognizer;

}

@property (assign,nonatomic) unsigned long long numberOfTouchesRequired;              //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) unsigned long long direction;                            //@synthesize direction=_direction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(unsigned long long)direction;
-(void)unload;
-(id)settingObjectForKey:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(void)setDirection:(unsigned long long)arg1 ;
-(unsigned long long)numberOfTouchesRequired;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(BOOL)ownsGestureRecognizer:(id)arg1 ;
-(void)handleSwipe:(id)arg1 ;
@end

