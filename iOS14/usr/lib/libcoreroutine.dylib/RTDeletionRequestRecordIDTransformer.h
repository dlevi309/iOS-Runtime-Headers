/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <Foundation/NSValueTransformer.h>

@interface RTDeletionRequestRecordIDTransformer : NSValueTransformer
+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)transformedValue:(id)arg1 ;
-(id)compressData:(id)arg1 algorithm:(int)arg2 ;
-(id)decompressData:(id)arg1 algorithm:(int)arg2 ;
-(BOOL)dataCompressedWithOriginalSize:(unsigned long long)arg1 compressedSize:(unsigned long long)arg2 ;
-(id)deprecatedDecompressData:(id)arg1 algorithm:(int)arg2 ;
@end

