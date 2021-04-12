/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSString;

@interface TSWPFontCacheKey : NSObject {

	NSString* _fontName;
	double _fontSize;
	double _fontWeight;
	unsigned long long _hash;

}

@property (nonatomic,readonly) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) double fontSize;                  //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,readonly) double fontWeight;                //@synthesize fontWeight=_fontWeight - In the implementation block
+(id)cacheKeyWithFontName:(id)arg1 size:(double)arg2 weight:(double)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)fontName;
-(double)fontSize;
-(double)fontWeight;
-(id)initWithFontName:(id)arg1 size:(double)arg2 weight:(double)arg3 ;
@end

