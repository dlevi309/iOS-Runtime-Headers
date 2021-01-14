/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBinding.h>

@interface OKActionBindingScroll : OKActionBinding {

	unsigned long long _triggerLimit;
	unsigned long long _probability;
	CGPoint _offset;
	BOOL _continuous;

}

@property (assign,nonatomic) CGPoint offset;              //@synthesize offset=_offset - In the implementation block
+(id)supportedSettings;
-(void)unload;
-(id)settingObjectForKey:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(CGPoint)offset;
-(void)setOffset:(CGPoint)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
@end

