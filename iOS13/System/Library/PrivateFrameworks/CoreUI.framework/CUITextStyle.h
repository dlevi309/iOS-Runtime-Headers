/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CUINamedLookup.h>

@class NSString;

@interface CUITextStyle : CUINamedLookup {

	NSString* _fontName;
	double _fontSize;
	double _maxPointSize;
	double _minPointSize;
	long long _scalingStyle;
	long long _alignment;

}

@property (nonatomic,readonly) NSString * fontName;                 //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) double fontSize;                     //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,readonly) double maxPointSize;                 //@synthesize maxPointSize=_maxPointSize - In the implementation block
@property (nonatomic,readonly) double minPointSize;                 //@synthesize minPointSize=_minPointSize - In the implementation block
@property (nonatomic,readonly) long long scalingStyle;              //@synthesize scalingStyle=_scalingStyle - In the implementation block
@property (nonatomic,readonly) long long alignment;                 //@synthesize alignment=_alignment - In the implementation block
-(void)dealloc;
-(long long)alignment;
-(NSString *)fontName;
-(double)fontSize;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(long long)scalingStyle;
-(double)maxPointSize;
-(double)minPointSize;
@end

