/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <Foundation/NSValueTransformer.h>

@interface RTDeletionRequestRecordIDTransformer : NSValueTransformer
+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)transformedValue:(id)arg1 ;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)compressData:(id)arg1 algorithm:(int)arg2 ;
-(id)decompressData:(id)arg1 algorithm:(int)arg2 ;
-(BOOL)dataCompressedWithOriginalSize:(unsigned long long)arg1 compressedSize:(unsigned long long)arg2 ;
-(id)deprecatedDecompressData:(id)arg1 algorithm:(int)arg2 ;
@end

