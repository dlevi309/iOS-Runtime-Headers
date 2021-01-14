/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSString * metadataType; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                         //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) AVMetadataObject * underlyingMetadataObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)bounds;
-(NSString *)uniqueIdentifier;
-(NSString *)description;
-(double)rollAngle;
-(NSString *)metadataType;
-(AVMetadataFaceObject *)underlyingFaceObject;
-(AVMetadataObject *)underlyingMetadataObject;
-(id)initWithFaceObject:(id)arg1 ;
-(id)burstMetadataRepresentation;
@end

