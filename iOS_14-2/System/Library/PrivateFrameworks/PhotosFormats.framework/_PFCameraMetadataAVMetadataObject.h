/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@class NSString;

@interface _PFCameraMetadataAVMetadataObject : NSObject {

	int _confidence;
	NSString* _type;
	CGRect _bounds;

}

@property (readonly) SCD_Struct_PF3 time; 
@property (readonly) SCD_Struct_PF3 duration; 
@property (readonly) CGRect bounds;                        //@synthesize bounds=_bounds - In the implementation block
@property (readonly) NSString * type;                      //@synthesize type=_type - In the implementation block
@property (readonly) int confidence;                       //@synthesize confidence=_confidence - In the implementation block
+(id)objectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 type:(id)arg2 ;
+(id)humanFaceObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 ;
+(id)humanBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 ;
+(id)catBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 ;
+(id)dogBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 ;
+(id)salientObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 ;
-(int)confidence;
-(CGRect)bounds;
-(SCD_Struct_PF3)time;
-(NSString *)type;
-(SCD_Struct_PF3)duration;
-(id)initWithType:(id)arg1 bounds:(CGRect)arg2 confidence:(int)arg3 ;
@end

