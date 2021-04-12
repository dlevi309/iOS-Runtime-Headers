/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBinding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, NSString;

@interface OKActionBindingTap : OKActionBinding <UIGestureRecognizerDelegate> {

	unsigned long long _numberOfTapsRequired;
	unsigned long long _numberOfTouchesRequired;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (assign,nonatomic) unsigned long long numberOfTapsRequired;                 //@synthesize numberOfTapsRequired=_numberOfTapsRequired - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTouchesRequired;              //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)unload;
-(id)initWithSettings:(id)arg1 ;
-(unsigned long long)numberOfTouchesRequired;
-(unsigned long long)numberOfTapsRequired;
-(void)setNumberOfTapsRequired:(unsigned long long)arg1 ;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(void)handleTap:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(BOOL)ownsGestureRecognizer:(id)arg1 ;
@end

