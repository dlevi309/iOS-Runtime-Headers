/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoEvent.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface HMIVideoFrame : HMFObject <HMIVideoEvent, HMFLogging, NSSecureCoding> {

	long long _store;
	NSData* _data;
	CVBufferRef _pixelBuffer;
	CGSize _size;
	SCD_Struct_HM3 _presentationTimeStamp;

}

@property (readonly) CVBufferRef pixelBuffer;                           //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) NSData * data;                                     //@synthesize data=_data - In the implementation block
@property (readonly) CGSize size;                                       //@synthesize size=_size - In the implementation block
@property (readonly) SCD_Struct_HM3 presentationTimeStamp;              //@synthesize presentationTimeStamp=_presentationTimeStamp - In the implementation block
@property (readonly) SCD_Struct_HM3 time; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(SCD_Struct_HM3)time;
-(SCD_Struct_HM3)presentationTimeStamp;
-(CGSize)size;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)data;
-(id)attributeDescriptions;
-(CVBufferRef)pixelBuffer;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 presentationTimeStamp:(SCD_Struct_HM3)arg2 ;
-(void)printWithScale:(double)arg1 ;
-(id)initWithJPEGData:(id)arg1 size:(CGSize)arg2 presentationTimeStamp:(SCD_Struct_HM3)arg3 ;
-(id)compressedFrameWithScale:(double)arg1 quality:(double)arg2 error:(id*)arg3 ;
-(id)pixelBufferFrameWithError:(id*)arg1 ;
-(void)printWithHeight:(unsigned long long)arg1 ;
@end

