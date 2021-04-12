/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUAuxiliaryImageProperties.h>

@protocol NUAuxiliaryImage;
@class NSString, NSDictionary;

@interface NUCGAuxiliaryImageProperties : NSObject <NUAuxiliaryImageProperties> {

	id _imageSource;
	NSString* _auxiliaryImageTypeCGIdentifier;
	NSDictionary* _auxCoreGraphicsInfoDictionary;
	id<NUAuxiliaryImage> _auxImage;
	SCD_Struct_NU7 _size;

}

@property (retain) NSDictionary * auxCoreGraphicsInfoDictionary;              //@synthesize auxCoreGraphicsInfoDictionary=_auxCoreGraphicsInfoDictionary - In the implementation block
@property (retain) id<NUAuxiliaryImage> auxImage;                             //@synthesize auxImage=_auxImage - In the implementation block
@property (readonly) NSString * auxiliaryImageTypeCGIdentifier;               //@synthesize auxiliaryImageTypeCGIdentifier=_auxiliaryImageTypeCGIdentifier - In the implementation block
@property (assign) SCD_Struct_NU7 size;                                       //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCD_Struct_NU7)size;
-(void)setSize:(SCD_Struct_NU7)arg1 ;
-(id<NUAuxiliaryImage>)auxImage;
-(NSString *)description;
-(id)auxiliaryCoreGraphicsInfoDictionary:(out id*)arg1 ;
-(id)auxiliaryImage:(out id*)arg1 ;
-(NSString *)auxiliaryImageTypeCGIdentifier;
-(id)initWithCGProperties:(id)arg1 imageSource:(CGImageSourceRef)arg2 ;
-(NSDictionary *)auxCoreGraphicsInfoDictionary;
-(void)setAuxCoreGraphicsInfoDictionary:(NSDictionary *)arg1 ;
-(void)setAuxImage:(id<NUAuxiliaryImage>)arg1 ;
@end

