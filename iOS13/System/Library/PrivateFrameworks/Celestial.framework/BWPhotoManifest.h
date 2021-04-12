/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class NSArray, NSString, NSMutableDictionary;

@interface BWPhotoManifest : NSObject {

	NSArray* _photoDescriptors;
	NSString* _captureRequestIdentifier;
	os_unfair_lock_s _bufferPtrValueToPhotoDescriptorLock;
	NSMutableDictionary* _bufferPtrValueToPhotoDescriptor;

}

@property (nonatomic,readonly) NSArray * photoDescriptors;                       //@synthesize photoDescriptors=_photoDescriptors - In the implementation block
@property (nonatomic,readonly) NSString * captureRequestIdentifier;              //@synthesize captureRequestIdentifier=_captureRequestIdentifier - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)captureRequestIdentifier;
-(NSArray *)photoDescriptors;
-(id)descriptorForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)descriptorForIdentifier:(id)arg1 ;
-(id)initWithDescriptors:(id)arg1 captureRequestIdentifier:(id)arg2 ;
@end

