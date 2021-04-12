/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureConnectionConfiguration.h>

@class NSArray;

@interface FigMetadataObjectCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {

	NSArray* _metadataIdentifiers;
	CGRect _metadataRectOfInterest;
	int _faceTrackingMaxFaces;
	BOOL _faceTrackingUsesFaceRecognition;

}

@property (nonatomic,copy) NSArray * metadataIdentifiers;                       //@synthesize metadataIdentifiers=_metadataIdentifiers - In the implementation block
@property (assign,nonatomic) CGRect metadataRectOfInterest;                     //@synthesize metadataRectOfInterest=_metadataRectOfInterest - In the implementation block
@property (assign,nonatomic) int faceTrackingMaxFaces;                          //@synthesize faceTrackingMaxFaces=_faceTrackingMaxFaces - In the implementation block
@property (assign,nonatomic) BOOL faceTrackingUsesFaceRecognition;              //@synthesize faceTrackingUsesFaceRecognition=_faceTrackingUsesFaceRecognition - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(CGRect)metadataRectOfInterest;
-(id)description;
-(int)faceTrackingMaxFaces;
-(void)setFaceTrackingMaxFaces:(int)arg1 ;
-(void)setMetadataRectOfInterest:(CGRect)arg1 ;
-(void)setMetadataIdentifiers:(NSArray *)arg1 ;
-(void)setFaceTrackingUsesFaceRecognition:(BOOL)arg1 ;
-(NSArray *)metadataIdentifiers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)faceTrackingUsesFaceRecognition;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

