/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIStyleEffectConfiguration.h>

@class NSString;

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration {

	NSString* _backgroundType;
	BOOL _effectShowsValue;
	int _shouldRespectOutputBlending;

}

@property (nonatomic,copy) NSString * backgroundType;              //@synthesize backgroundType=_backgroundType - In the implementation block
@property (assign,nonatomic) BOOL effectShowsValue;                //@synthesize effectShowsValue=_effectShowsValue - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)backgroundType;
-(BOOL)shouldIgnoreForegroundColor;
-(BOOL)shouldRespectOutputBlending;
-(BOOL)effectShowsValue;
-(void)setShouldRespectOutputBlending:(BOOL)arg1 ;
-(void)setSelectionType:(long long)arg1 ;
-(void)setBackgroundType:(NSString *)arg1 ;
-(void)setEffectShowsValue:(BOOL)arg1 ;
@end

