/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(void)setKeyPressed:(NSString *)arg1 ;
-(void)setIsKeyUp:(BOOL)arg1 ;
-(NSString *)keyPressed;
-(BOOL)isKeyUp;
-(void)setSettingKeyPressed:(id)arg1 ;
-(void)setSettingIsKeyUp:(BOOL)arg1 ;
@end

