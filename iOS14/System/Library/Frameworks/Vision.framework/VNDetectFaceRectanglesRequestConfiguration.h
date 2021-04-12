/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSNumber;

@interface VNDetectFaceRectanglesRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _faceCoreEnhanceEyesAndMouthLocalization;
	BOOL _faceCoreExtractBlink;
	BOOL _faceCoreExtractSmile;
	unsigned long long _faceCoreType;
	NSNumber* _faceCoreMinFaceSize;
	NSNumber* _faceCoreNumberOfDetectionAngles;

}

@property (assign,nonatomic) unsigned long long faceCoreType;                           //@synthesize faceCoreType=_faceCoreType - In the implementation block
@property (nonatomic,retain) NSNumber * faceCoreMinFaceSize;                            //@synthesize faceCoreMinFaceSize=_faceCoreMinFaceSize - In the implementation block
@property (nonatomic,retain) NSNumber * faceCoreNumberOfDetectionAngles;                //@synthesize faceCoreNumberOfDetectionAngles=_faceCoreNumberOfDetectionAngles - In the implementation block
@property (assign,nonatomic) BOOL faceCoreEnhanceEyesAndMouthLocalization;              //@synthesize faceCoreEnhanceEyesAndMouthLocalization=_faceCoreEnhanceEyesAndMouthLocalization - In the implementation block
@property (assign,nonatomic) BOOL faceCoreExtractBlink;                                 //@synthesize faceCoreExtractBlink=_faceCoreExtractBlink - In the implementation block
@property (assign,nonatomic) BOOL faceCoreExtractSmile;                                 //@synthesize faceCoreExtractSmile=_faceCoreExtractSmile - In the implementation block
-(BOOL)faceCoreExtractSmile;
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setFaceCoreNumberOfDetectionAngles:(NSNumber *)arg1 ;
-(void)setFaceCoreType:(unsigned long long)arg1 ;
-(BOOL)faceCoreExtractBlink;
-(unsigned long long)faceCoreType;
-(NSNumber *)faceCoreMinFaceSize;
-(BOOL)faceCoreEnhanceEyesAndMouthLocalization;
-(void)setFaceCoreExtractBlink:(BOOL)arg1 ;
-(void)setFaceCoreMinFaceSize:(NSNumber *)arg1 ;
-(void)setFaceCoreExtractSmile:(BOOL)arg1 ;
-(void)setFaceCoreEnhanceEyesAndMouthLocalization:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)faceCoreNumberOfDetectionAngles;
@end

