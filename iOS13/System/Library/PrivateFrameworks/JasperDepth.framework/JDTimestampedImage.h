/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


#import <JasperDepth/JasperDepth-Structs.h>
@class NSDictionary;

@interface JDTimestampedImage : NSObject {

	CVBufferRef _image;
	NSDictionary* _metadataDictionary;
	SCD_Struct_JD2 _timestamp;

}

@property (nonatomic,readonly) CVBufferRef image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadataDictionary;              //@synthesize metadataDictionary=_metadataDictionary - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JD2 timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
-(void)dealloc;
-(SCD_Struct_JD2)timestamp;
-(CVBufferRef)image;
-(NSDictionary *)metadataDictionary;
-(id)initWithImage:(CVBufferRef)arg1 metadataDictionary:(id)arg2 andTimestamp:(SCD_Struct_JD2)arg3 ;
-(id)initWithImage:(CVBufferRef)arg1 andTimestamp:(SCD_Struct_JD2)arg2 ;
@end

