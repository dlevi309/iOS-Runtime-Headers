/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@class NSNumber;

@interface VNDetectFaceRectanglesRequest : VNImageBasedRequest {

	BOOL _faceCoreEnhanceEyesAndMouthLocalization;
	BOOL _faceCoreExtractBlink;
	BOOL _faceCoreExtractSmile;
	NSNumber* _faceCoreMinFaceSize;
	NSNumber* _faceCoreNumberOfDetectionAngles;

}

@property (assign,nonatomic) unsigned long long faceCoreType; 
@property (nonatomic,retain) NSNumber * faceCoreMinFaceSize;                            //@synthesize faceCoreMinFaceSize=_faceCoreMinFaceSize - In the implementation block
@property (nonatomic,retain) NSNumber * faceCoreNumberOfDetectionAngles;                //@synthesize faceCoreNumberOfDetectionAngles=_faceCoreNumberOfDetectionAngles - In the implementation block
@property (assign,nonatomic) BOOL faceCoreEnhanceEyesAndMouthLocalization;              //@synthesize faceCoreEnhanceEyesAndMouthLocalization=_faceCoreEnhanceEyesAndMouthLocalization - In the implementation block
@property (assign,nonatomic) BOOL faceCoreExtractBlink;                                 //@synthesize faceCoreExtractBlink=_faceCoreExtractBlink - In the implementation block
@property (assign,nonatomic) BOOL faceCoreExtractSmile;                                 //@synthesize faceCoreExtractSmile=_faceCoreExtractSmile - In the implementation block
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(Class)configurationClass;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
+(BOOL)supportsPrivateRevision:(unsigned long long)arg1 ;
+(id)descriptionForPrivateRevision:(unsigned long long)arg1 ;
-(BOOL)faceCoreExtractSmile;
-(long long)dependencyProcessingOrdinality;
-(void)setFaceCoreNumberOfDetectionAngles:(NSNumber *)arg1 ;
-(void)setFaceCoreType:(unsigned long long)arg1 ;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)faceCoreExtractBlink;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(unsigned long long)faceCoreType;
-(NSNumber *)faceCoreMinFaceSize;
-(BOOL)faceCoreEnhanceEyesAndMouthLocalization;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(void)setFaceCoreExtractBlink:(BOOL)arg1 ;
-(void)setFaceCoreMinFaceSize:(NSNumber *)arg1 ;
-(void)setFaceCoreExtractSmile:(BOOL)arg1 ;
-(void)setFaceCoreEnhanceEyesAndMouthLocalization:(BOOL)arg1 ;
-(NSNumber *)faceCoreNumberOfDetectionAngles;
-(void)applyConfigurationOfRequest:(id)arg1 ;
@end

