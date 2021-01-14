/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/


#import <CoreChart/CoreChart-Structs.h>
@class NSMutableDictionary;

@interface CCVegaJSFontCache : NSObject {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _styleCache;
	NSMutableDictionary* _internalNameCache;

}
+(id)sharedCache;
+(void)cleanUp;
+(CTFontRef)cacheedFontForInternalName:(id)arg1 ;
+(void)cacheFont:(CTFontRef)arg1 forInternalName:(id)arg2 ;
+(id)fontMetricsForTextStyle:(id)arg1 options:(id)arg2 ;
+(id)fontWithCSSFontString:(id)arg1 options:(id)arg2 ;
+(id)fontWithFontFamily:(id)arg1 fontSize:(double)arg2 fontWeight:(id)arg3 fontStyle:(id)arg4 fontVariant:(id)arg5 options:(id)arg6 ;
-(id)init;
@end

