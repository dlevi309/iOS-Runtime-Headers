/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)fontSize;
-(NSString *)fontName;
-(double)maxPointSize;
-(long long)scalingStyle;
-(double)minPointSize;
-(long long)alignment;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(void)dealloc;
@end

