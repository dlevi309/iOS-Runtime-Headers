/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKActionBinding.h>

@class NSString;

@interface OKActionBindingCustom : OKActionBinding {

	NSString* _name;

}

@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)supportedSettings;
-(void)unload;
-(id)settingObjectForKey:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
-(void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(BOOL)ownsGestureRecognizer:(id)arg1 ;
@end

