/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PICompositionExportResult.h>

@class NSData, NSURL, NSDictionary;

@interface PICompositionExportAuxiliaryResult : PICompositionExportResult {

	NSData* _companionImageData;
	NSURL* _companionVideoURL;
	NSDictionary* _auxiliaryImages;
	NSDictionary* _properties;

}

@property (retain) NSDictionary * auxiliaryImages;              //@synthesize auxiliaryImages=_auxiliaryImages - In the implementation block
@property (copy) NSDictionary * properties;                     //@synthesize properties=_properties - In the implementation block
@property (assign) SCD_Struct_PI5 inputSize; 
@property (retain) NSData * companionImageData;                 //@synthesize companionImageData=_companionImageData - In the implementation block
@property (retain) NSURL * companionVideoURL;                   //@synthesize companionVideoURL=_companionVideoURL - In the implementation block
-(NSDictionary *)properties;
-(NSURL *)companionVideoURL;
-(NSData *)companionImageData;
-(void)setProperties:(NSDictionary *)arg1 ;
-(void)setCompanionImageData:(NSData *)arg1 ;
-(void)setCompanionVideoURL:(NSURL *)arg1 ;
-(NSDictionary *)auxiliaryImages;
-(void)setAuxiliaryImages:(NSDictionary *)arg1 ;
@end

