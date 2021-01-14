/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNTrackObjectRequest.h>

@class NSNumber;

@interface VNTrackLegacyFaceCoreObjectRequest : VNTrackObjectRequest {

	BOOL _faceCoreEnhanceEyesAndMouthLocalization;
	BOOL _faceCoreExtractBlink;
	BOOL _faceCoreExtractSmile;
	NSNumber* _faceCoreMinFaceSize;
	NSNumber* _faceCoreNumberOfDetectionAngles;

}

@property (nonatomic,retain) NSNumber * faceCoreMinFaceSize;                            //@synthesize faceCoreMinFaceSize=_faceCoreMinFaceSize - In the implementation block
@property (nonatomic,retain) NSNumber * faceCoreNumberOfDetectionAngles;                //@synthesize faceCoreNumberOfDetectionAngles=_faceCoreNumberOfDetectionAngles - In the implementation block
@property (assign,nonatomic) BOOL faceCoreEnhanceEyesAndMouthLocalization;              //@synthesize faceCoreEnhanceEyesAndMouthLocalization=_faceCoreEnhanceEyesAndMouthLocalization - In the implementation block
@property (assign,nonatomic) BOOL faceCoreExtractBlink;                                 //@synthesize faceCoreExtractBlink=_faceCoreExtractBlink - In the implementation block
@property (assign,nonatomic) BOOL faceCoreExtractSmile;                                 //@synthesize faceCoreExtractSmile=_faceCoreExtractSmile - In the implementation block
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(BOOL)supportsPrivateRevision:(unsigned long long)arg1 ;
+(id)trackerTypeForRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(unsigned)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)arg1 ;
-(BOOL)faceCoreExtractSmile;
-(void)setFaceCoreNumberOfDetectionAngles:(NSNumber *)arg1 ;
-(BOOL)faceCoreExtractBlink;
-(NSNumber *)faceCoreMinFaceSize;
-(BOOL)faceCoreEnhanceEyesAndMouthLocalization;
-(void)setFaceCoreExtractBlink:(BOOL)arg1 ;
-(void)setFaceCoreMinFaceSize:(NSNumber *)arg1 ;
-(void)setFaceCoreExtractSmile:(BOOL)arg1 ;
-(void)setFaceCoreEnhanceEyesAndMouthLocalization:(BOOL)arg1 ;
-(void)populateDetectorProcessingOptions:(id)arg1 session:(id)arg2 ;
-(NSNumber *)faceCoreNumberOfDetectionAngles;
@end

