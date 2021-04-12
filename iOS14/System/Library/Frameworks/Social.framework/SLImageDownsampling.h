/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


#import <Social/Social-Structs.h>
@interface SLImageDownsampling : NSObject
+(void)generateThumbnailFromImageData:(id)arg1 adjustSmallestSideToSize:(unsigned long long)arg2 resultsHandler:(/*^block*/id)arg3 ;
+(SCD_Struct_SL13)imageSizeWithData:(id)arg1 ;
+(id)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned long long)arg2 ;
+(id)createThumbnailWithData:(id)arg1 adjustSmallestSideToSize:(unsigned long long)arg2 ;
+(void)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned long long)arg2 resultsHandler:(/*^block*/id)arg3 ;
@end

