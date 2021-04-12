/*
* Generated on Monday, March 1, 2021 at 2:33:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CAMMetadataObjectResult.h>

@class NSString, AVMetadataObject, AVMetadataFaceObject;

@interface CAMFaceResult : NSObject <CAMMetadataObjectResult> {

	NSString* _uniqueIdentifier;
	double _rollAngle;
	AVMetadataFaceObject* _underlyingFaceObject;
	CGRect _bounds;

}

@property (nonatomic,readonly) CGRect bounds;                                            //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) double rollAngle;                                         //@synthesize rollAngle=_rollAngle - In the implementation block
@property (nonatomic,readonly) AVMetadataFaceObject * underlyingFaceObject;              //@synthesize underlyingFaceObject=_underlyingFaceObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * metadataType; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                         //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) AVMetadataObject * underlyingMetadataObject; 
-(NSString *)description;
-(NSString *)uniqueIdentifier;
-(CGRect)bounds;
-(double)rollAngle;
-(NSString *)metadataType;
-(AVMetadataFaceObject *)underlyingFaceObject;
-(AVMetadataObject *)underlyingMetadataObject;
-(id)initWithFaceObject:(id)arg1 ;
-(id)burstMetadataRepresentation;
@end

