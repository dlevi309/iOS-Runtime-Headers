/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBinding.h>

@class NSString;

@interface OKActionBindingKeyPressed : OKActionBinding {

	NSString* _keyPressed;
	BOOL _isKeyUp;

}

@property (nonatomic,retain) NSString * keyPressed;              //@synthesize keyPressed=_keyPressed - In the implementation block
@property (assign,nonatomic) BOOL isKeyUp;                       //@synthesize isKeyUp=_isKeyUp - In the implementation block
+(id)supportedSettings;
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isKeyUp;
-(void)dealloc;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(void)setKeyPressed:(NSString *)arg1 ;
-(void)setIsKeyUp:(BOOL)arg1 ;
-(NSString *)keyPressed;
-(void)setSettingKeyPressed:(id)arg1 ;
-(void)setSettingIsKeyUp:(BOOL)arg1 ;
@end

