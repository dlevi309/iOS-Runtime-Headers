/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMSourceNode.h>

@interface AXMImageNode : AXMSourceNode
+(BOOL)supportsSecureCoding;
+(BOOL)isSupported;
+(id)title;
-(void)triggerWithImage:(id)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)triggerWithPixelBuffer:(CVBufferRef)arg1 exifOrientation:(unsigned)arg2 options:(id)arg3 cacheKey:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)produceImage:(id)arg1 ;
-(void)triggerWithImageURL:(id)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
@end

