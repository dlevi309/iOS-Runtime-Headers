/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSData, NSArray, NSString;

@interface HMICameraVideoFrame : HMFObject <NSSecureCoding, HMFLogging> {

	unsigned long long _frameId;
	unsigned long long _fragmentSequenceNumber;
	CVBufferRef _pixelBuffer;
	NSData* _jpegData;
	NSArray* _motionDetections;
	CGSize _size;
	SCD_Struct_HM3 _presentationTime;
	SCD_Struct_HM3 _sessionPresentationTime;

}

@property (readonly) CVBufferRef pixelBuffer;                                //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) NSData * jpegData;                                      //@synthesize jpegData=_jpegData - In the implementation block
@property (retain) NSArray * motionDetections;                               //@synthesize motionDetections=_motionDetections - In the implementation block
@property (assign) SCD_Struct_HM3 sessionPresentationTime;                   //@synthesize sessionPresentationTime=_sessionPresentationTime - In the implementation block
@property (readonly) SCD_Struct_HM3 presentationTime;                        //@synthesize presentationTime=_presentationTime - In the implementation block
@property (readonly) CGSize size;                                            //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long frameId;                             //@synthesize frameId=_frameId - In the implementation block
@property (readonly) unsigned long long fragmentSequenceNumber;              //@synthesize fragmentSequenceNumber=_fragmentSequenceNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(SCD_Struct_HM3)presentationTime;
-(CGSize)size;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(CVBufferRef)pixelBuffer;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)frameId;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)JPEGRepresentationWithDownscaleFactor:(float)arg1 outSize:(CGSize*)arg2 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 presentationTime:(SCD_Struct_HM3)arg2 frameId:(unsigned long long)arg3 fragmentSequenceNumber:(unsigned long long)arg4 ;
-(NSData *)jpegData;
-(id)initWithJPEGData:(id)arg1 presentationTime:(SCD_Struct_HM3)arg2 frameId:(unsigned long long)arg3 fragmentSequenceNumber:(unsigned long long)arg4 size:(CGSize)arg5 ;
-(unsigned long long)fragmentSequenceNumber;
-(NSArray *)motionDetections;
-(void)setMotionDetections:(NSArray *)arg1 ;
-(SCD_Struct_HM3)sessionPresentationTime;
-(void)setSessionPresentationTime:(SCD_Struct_HM3)arg1 ;
@end

