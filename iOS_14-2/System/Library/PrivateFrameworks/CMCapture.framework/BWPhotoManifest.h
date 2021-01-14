/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSArray, NSString, NSMutableDictionary;

@interface BWPhotoManifest : NSObject {

	NSArray* _photoDescriptors;
	NSString* _captureRequestIdentifier;
	os_unfair_lock_s _bufferPtrValueToPhotoDescriptorLock;
	NSMutableDictionary* _bufferPtrValueToPhotoDescriptor;

}

@property (nonatomic,readonly) NSArray * photoDescriptors;                       //@synthesize photoDescriptors=_photoDescriptors - In the implementation block
@property (nonatomic,readonly) NSString * captureRequestIdentifier;              //@synthesize captureRequestIdentifier=_captureRequestIdentifier - In the implementation block
-(id)descriptorForIdentifier:(id)arg1 ;
-(NSString *)captureRequestIdentifier;
-(id)description;
-(NSArray *)photoDescriptors;
-(id)initWithDescriptors:(id)arg1 captureRequestIdentifier:(id)arg2 ;
-(id)descriptorForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
@end

