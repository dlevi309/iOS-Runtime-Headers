/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)effectShowsValue;
-(NSString *)backgroundType;
-(id)description;
-(void)setSelectionType:(long long)arg1 ;
-(void)setBackgroundType:(NSString *)arg1 ;
-(void)setShouldRespectOutputBlending:(BOOL)arg1 ;
-(BOOL)shouldIgnoreForegroundColor;
-(BOOL)shouldRespectOutputBlending;
-(void)setEffectShowsValue:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

