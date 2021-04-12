/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMSourceNode.h>

@interface AXMImageNode : AXMSourceNode
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)produceImage:(id)arg1 ;
-(void)triggerWithImage:(id)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)triggerWithPixelBuffer:(CVBufferRef)arg1 exifOrientation:(unsigned)arg2 options:(id)arg3 cacheKey:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)triggerWithImageURL:(id)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
@end

