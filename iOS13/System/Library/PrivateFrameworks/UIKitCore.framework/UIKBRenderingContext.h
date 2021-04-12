/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIKBRenderConfig;

@interface UIKBRenderingContext : NSObject <NSCopying> {

	BOOL _isFloating;
	unsigned long long _shiftState;
	UIKBRenderConfig* _renderConfig;
	long long _keyboardType;
	long long _handBias;

}

@property (assign,nonatomic) unsigned long long shiftState;                //@synthesize shiftState=_shiftState - In the implementation block
@property (assign,nonatomic) long long keyboardType;                       //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;              //@synthesize renderConfig=_renderConfig - In the implementation block
@property (assign,nonatomic) long long handBias;                           //@synthesize handBias=_handBias - In the implementation block
@property (assign,nonatomic) BOOL isFloating;                              //@synthesize isFloating=_isFloating - In the implementation block
+(id)renderingContextForRenderConfig:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)keyboardType;
-(BOOL)isFloating;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(UIKBRenderConfig *)renderConfig;
-(long long)handBias;
-(void)setHandBias:(long long)arg1 ;
-(void)setIsFloating:(BOOL)arg1 ;
-(unsigned long long)shiftState;
-(id)initWithRenderConfig:(id)arg1 ;
-(void)setShiftState:(unsigned long long)arg1 ;
@end

