/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSData;

@interface _UICGImageDecompressor : NSObject {

	NSData* _imageData;
	CGSize _maxSize;
	CGImageRef _imageRef;
	unsigned long long _renderingIntent;
	unsigned long long _jpegDecodeRequestID;
	os_unfair_lock_s _metadataLock;
	os_unfair_lock_s _decompressionLock;
	struct {
		unsigned metadataFinished : 1;
		unsigned imageOrientation : 3;
		unsigned decompressionFinished : 1;
		unsigned cache : 1;
	}  _decompressorFlags;

}
+(void)flushCaches;
-(id)initWithData:(id)arg1 immediateLoadWithMaxSize:(CGSize)arg2 renderingIntent:(unsigned long long)arg3 cache:(BOOL)arg4 ;
-(CGImageRef)waitForImageRef;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

