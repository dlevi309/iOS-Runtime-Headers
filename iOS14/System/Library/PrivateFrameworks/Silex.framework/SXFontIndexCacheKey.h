/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)fontSize;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id<SXFontAttributes>)fontAttributes;
-(id)initWithFontAttributes:(id)arg1 fontSize:(long long)arg2 ;
@end

