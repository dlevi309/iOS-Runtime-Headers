/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIFontCacheKey : NSObject <NSCopying> {

	unsigned long long _hash;

}
+(id)newFontCacheKeyWithFontName:(id)arg1 traits:(int)arg2 pointSize:(double)arg3 ;
+(id)newSystemFontCacheKeyWithTraits:(int)arg1 pointSize:(double)arg2 ;
+(id)newFontCacheKeyWithFontDescriptor:(id)arg1 pointSize:(double)arg2 textStyleForScaling:(id)arg3 pointSizeForScaling:(double)arg4 maximumPointSizeAfterScaling:(double)arg5 textLegibility:(BOOL)arg6 ;
+(id)newFontCacheKeyWithTextStyle:(id)arg1 contentSizeCategory:(id)arg2 textLegibility:(BOOL)arg3 ;
-(void)_precalculateHash;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isEqualToKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_hash;
@end

