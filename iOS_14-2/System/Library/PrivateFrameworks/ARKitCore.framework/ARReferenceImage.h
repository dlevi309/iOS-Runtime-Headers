/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSString, ARReferenceImageCachedError, NSUUID;

@interface ARReferenceImage : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _verificationQueue;
	NSObject*<OS_dispatch_semaphore> _verificationQueueSemaphore;
	NSString* _name;
	NSString* _resourceGroupName;
	double _estimatedQuality;
	ARReferenceImageCachedError* _cachedVerificationError;
	CVBufferRef _pixelBuffer;
	CVBufferRef _alphaMask;
	NSUUID* _identifier;
	CGSize _physicalSize;

}

@property (assign) double estimatedQuality;                                            //@synthesize estimatedQuality=_estimatedQuality - In the implementation block
@property (retain) ARReferenceImageCachedError * cachedVerificationError;              //@synthesize cachedVerificationError=_cachedVerificationError - In the implementation block
@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer;                                //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (nonatomic,readonly) CVBufferRef alphaMask;                                  //@synthesize alphaMask=_alphaMask - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CGSize physicalSize;                                    //@synthesize physicalSize=_physicalSize - In the implementation block
@property (nonatomic,readonly) NSString * resourceGroupName;                           //@synthesize resourceGroupName=_resourceGroupName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)referenceImagesInGroupNamed:(id)arg1 catalogName:(id)arg2 bundle:(id)arg3 ;
+(id)referenceImagesInGroupNamed:(id)arg1 catalog:(id)arg2 ;
+(id)referenceImagesInGroupNamed:(id)arg1 bundle:(id)arg2 ;
+(id)referenceImagesInGroupNamed:(id)arg1 catalogURL:(id)arg2 ;
-(CGSize)imageSize;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(void)validateWithCompletionHandler:(/*^block*/id)arg1 ;
-(CVBufferRef)pixelBuffer;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(CGSize)physicalSize;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithCIImage:(id)arg1 orientation:(unsigned)arg2 physicalWidth:(double)arg3 alphaInfo:(unsigned*)arg4 addPadding:(BOOL)arg5 ;
-(id)initWithCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 physicalWidth:(double)arg3 addPadding:(BOOL)arg4 ;
-(void)setResourceGroupName:(NSString *)arg1 ;
-(double)estimatedQuality;
-(ARReferenceImageCachedError *)cachedVerificationError;
-(void)setCachedVerificationError:(ARReferenceImageCachedError *)arg1 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 physicalWidth:(double)arg3 addPadding:(BOOL)arg4 ;
-(id)initWithCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 physicalWidth:(double)arg3 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 physicalWidth:(double)arg3 ;
-(void)estimateQualityWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)resourceGroupName;
-(void)setEstimatedQuality:(double)arg1 ;
-(CVBufferRef)alphaMask;
@end

