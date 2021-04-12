/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)type;
-(int)confidence;
-(SCD_Struct_PF3)duration;
-(SCD_Struct_PF3)time;
-(CGRect)bounds;
-(id)initWithType:(id)arg1 bounds:(CGRect)arg2 confidence:(int)arg3 ;
@end

