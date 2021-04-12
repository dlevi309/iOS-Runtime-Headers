/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureConnectionConfiguration.h>

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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMetadataIdentifiers:(NSArray *)arg1 ;
-(void)setMetadataRectOfInterest:(CGRect)arg1 ;
-(int)faceTrackingMaxFaces;
-(void)setFaceTrackingMaxFaces:(int)arg1 ;
-(void)setFaceTrackingUsesFaceRecognition:(BOOL)arg1 ;
-(NSArray *)metadataIdentifiers;
-(BOOL)faceTrackingUsesFaceRecognition;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(CGRect)metadataRectOfInterest;
@end

