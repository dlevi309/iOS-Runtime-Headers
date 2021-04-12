/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SXFontAttributes;
@interface SXFontIndexCacheKey : NSObject <NSCopying> {

	id<SXFontAttributes> _fontAttributes;
	long long _fontSize;

}

@property (nonatomic,readonly) id<SXFontAttributes> fontAttributes;              //@synthesize fontAttributes=_fontAttributes - In the implementation block
@property (nonatomic,readonly) long long fontSize;                               //@synthesize fontSize=_fontSize - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SXFontAttributes>)fontAttributes;
-(long long)fontSize;
-(id)initWithFontAttributes:(id)arg1 fontSize:(long long)arg2 ;
@end

