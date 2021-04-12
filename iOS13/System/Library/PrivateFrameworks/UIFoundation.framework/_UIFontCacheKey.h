/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIFontCacheKey : NSObject <NSCopying> {

	unsigned long long _hash;

}
+(id)fontCacheKeyWithTextStyle:(id)arg1 contentSizeCategory:(id)arg2 textLegibility:(BOOL)arg3 ;
+(id)fontCacheKeyWithFontDescriptor:(id)arg1 pointSize:(double)arg2 textStyleForScaling:(id)arg3 pointSizeForScaling:(double)arg4 maximumPointSizeAfterScaling:(double)arg5 textLegibility:(BOOL)arg6 ;
+(id)fontCacheKeyWithFontName:(id)arg1 traits:(int)arg2 pointSize:(double)arg3 ;
+(id)systemFontCacheKeyWithTraits:(int)arg1 pointSize:(double)arg2 ;
+(id)fontCacheKeyWithTextStyle:(id)arg1 contentSizeCategory:(id)arg2 ;
+(id)fontCacheKeyWithFontDescriptor:(id)arg1 pointSize:(double)arg2 textStyleForScaling:(id)arg3 pointSizeForScaling:(double)arg4 maximumPointSizeAfterScaling:(double)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_hash;
-(void)_precalculateHash;
-(BOOL)_isEqualToKey:(id)arg1 ;
@end

