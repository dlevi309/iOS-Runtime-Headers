/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIStructuredThemeStore, TXRTextureInfo, NSMutableArray;

@interface _CUIThemeTextureRendition : CUIThemeRendition {

	CUIStructuredThemeStore* _sourceProvider;
	long long _textureInterpretation;
	BOOL _textureSourceImageOpaque;
	TXRTextureInfo* _textureInfo;
	NSMutableArray* _textureMipLevels;

}
-(void)_setStructuredThemeStore:(id)arg1 ;
-(id)provideTextureInfo;
-(id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 withBufferAllocator:(id)arg4 ;
-(id)mipLevels;
-(id)_texturedImageWithKey:(id)arg1 ;
-(long long)textureIntepretation;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(void)dealloc;
@end

