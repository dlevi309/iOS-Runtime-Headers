/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setProperties:(NSDictionary *)arg1 ;
-(NSURL *)companionVideoURL;
-(NSData *)companionImageData;
-(void)setCompanionImageData:(NSData *)arg1 ;
-(void)setCompanionVideoURL:(NSURL *)arg1 ;
-(NSDictionary *)auxiliaryImages;
-(void)setAuxiliaryImages:(NSDictionary *)arg1 ;
@end

