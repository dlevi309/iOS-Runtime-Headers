/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


#import <Social/Social-Structs.h>
@interface SLImageDownsampling : NSObject
+(void)generateThumbnailFromImageData:(id)arg1 adjustSmallestSideToSize:(unsigned long long)arg2 resultsHandler:(/*^block*/id)arg3 ;
+(id)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned long long)arg2 ;
+(SCD_Struct_SL13)imageSizeWithData:(id)arg1 ;
+(id)createThumbnailWithData:(id)arg1 adjustSmallestSideToSize:(unsigned long long)arg2 ;
+(void)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned long long)arg2 resultsHandler:(/*^block*/id)arg3 ;
@end

