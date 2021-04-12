/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(void)_setStructuredThemeStore:(id)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(id)provideTextureInfo;
-(id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 withBufferAllocator:(id)arg4 ;
-(id)mipLevels;
-(id)_texturedImageWithKey:(id)arg1 ;
@end

