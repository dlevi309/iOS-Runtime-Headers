/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@interface _CUIThemeFacetCacheKey : NSObject {

	renditionkeytoken keyList[22];
	long long themeIndex;
	unsigned long long hashPrecalc;

}
-(unsigned long long)hash64;
-(unsigned long long)hash;
-(id)initWithKeyList:(const renditionkeytoken*)arg1 themeIndex:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

