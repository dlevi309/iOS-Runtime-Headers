/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUImageProperties.h>

@protocol NURAWImageProperties;
@class NSURL, NSDictionary, NSString;

@interface _NUImageProperties : NSObject <NUImageProperties> {

	BOOL _isFusedOvercapture;
	NSURL* _url;
	NSDictionary* _metadata;
	CGColorSpaceRef _colorSpace;
	long long _orientation;
	NSString* _fileUTI;
	long long _alphaInfo;
	long long _componentInfo;
	NSDictionary* _auxiliaryImagesProperties;
	id<NURAWImageProperties> _rawProperties;
	SCD_Struct_NU7 _size;

}

@property (retain) NSURL * url;                                           //@synthesize url=_url - In the implementation block
@property (retain) NSDictionary * metadata;                               //@synthesize metadata=_metadata - In the implementation block
@property (retain) CGColorSpaceRef colorSpace;                            //@synthesize colorSpace=_colorSpace - In the implementation block
@property (assign) SCD_Struct_NU7 size;                                   //@synthesize size=_size - In the implementation block
@property (assign) long long orientation;                                 //@synthesize orientation=_orientation - In the implementation block
@property (retain) NSString * fileUTI;                                    //@synthesize fileUTI=_fileUTI - In the implementation block
@property (assign) long long alphaInfo;                                   //@synthesize alphaInfo=_alphaInfo - In the implementation block
@property (assign) long long componentInfo;                               //@synthesize componentInfo=_componentInfo - In the implementation block
@property (assign) BOOL isFusedOvercapture;                               //@synthesize isFusedOvercapture=_isFusedOvercapture - In the implementation block
@property (retain) NSDictionary * auxiliaryImagesProperties;              //@synthesize auxiliaryImagesProperties=_auxiliaryImagesProperties - In the implementation block
@property (retain) id<NURAWImageProperties> rawProperties;                //@synthesize rawProperties=_rawProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(BOOL)isFusedOvercapture;
-(SCD_Struct_NU7)size;
-(NSString *)fileUTI;
-(void)setAlphaInfo:(long long)arg1 ;
-(void)setSize:(SCD_Struct_NU7)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSURL *)url;
-(NSString *)description;
-(id<NURAWImageProperties>)rawProperties;
-(void)setUrl:(NSURL *)arg1 ;
-(long long)orientation;
-(NSDictionary *)metadata;
-(void)setFileUTI:(NSString *)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(long long)alphaInfo;
-(long long)componentInfo;
-(void)setComponentInfo:(long long)arg1 ;
-(NSDictionary *)auxiliaryImagesProperties;
-(void)setAuxiliaryImagesProperties:(NSDictionary *)arg1 ;
-(void)setIsFusedOvercapture:(BOOL)arg1 ;
-(void)setRawProperties:(id<NURAWImageProperties>)arg1 ;
@end

