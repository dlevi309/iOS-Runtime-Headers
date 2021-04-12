/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(SCD_Struct_NU7)size;
-(void)setSize:(SCD_Struct_NU7)arg1 ;
-(id<NUAuxiliaryImage>)auxImage;
-(id)auxiliaryCoreGraphicsInfoDictionary:(out id*)arg1 ;
-(id)auxiliaryImage:(out id*)arg1 ;
-(NSString *)auxiliaryImageTypeCGIdentifier;
-(id)initWithCGProperties:(id)arg1 imageSource:(CGImageSourceRef)arg2 ;
-(NSDictionary *)auxCoreGraphicsInfoDictionary;
-(void)setAuxCoreGraphicsInfoDictionary:(NSDictionary *)arg1 ;
-(void)setAuxImage:(id<NUAuxiliaryImage>)arg1 ;
@end

