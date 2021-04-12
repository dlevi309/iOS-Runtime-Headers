/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign) CGColorSpaceRef colorSpace;                            //@synthesize colorSpace=_colorSpace - In the implementation block
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
-(NSString *)description;
-(SCD_Struct_NU7)size;
-(NSURL *)url;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)setSize:(SCD_Struct_NU7)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)fileUTI;
-(void)setFileUTI:(NSString *)arg1 ;
-(void)setAlphaInfo:(long long)arg1 ;
-(id<NURAWImageProperties>)rawProperties;
-(BOOL)isFusedOvercapture;
-(long long)alphaInfo;
-(long long)componentInfo;
-(void)setComponentInfo:(long long)arg1 ;
-(NSDictionary *)auxiliaryImagesProperties;
-(void)setAuxiliaryImagesProperties:(NSDictionary *)arg1 ;
-(void)setIsFusedOvercapture:(BOOL)arg1 ;
-(void)setRawProperties:(id<NURAWImageProperties>)arg1 ;
@end

