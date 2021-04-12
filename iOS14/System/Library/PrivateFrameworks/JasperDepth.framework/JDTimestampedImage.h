/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


#import <JasperDepth/JasperDepth-Structs.h>
@class NSDictionary;

@interface JDTimestampedImage : NSObject {

	CVBufferRef _image;
	NSDictionary* _metadataDictionary;
	SCD_Struct_JD3 _timestamp;

}

@property (nonatomic,readonly) CVBufferRef image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadataDictionary;              //@synthesize metadataDictionary=_metadataDictionary - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JD3 timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
-(SCD_Struct_JD3)timestamp;
-(CVBufferRef)image;
-(NSDictionary *)metadataDictionary;
-(void)dealloc;
-(id)initWithImage:(CVBufferRef)arg1 andTimestamp:(SCD_Struct_JD3)arg2 ;
-(id)initWithImage:(CVBufferRef)arg1 metadataDictionary:(id)arg2 andTimestamp:(SCD_Struct_JD3)arg3 ;
@end

