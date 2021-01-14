/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUTaggedSpaceMapping.h>

@protocol NUTaggedSpaceMapping;
@interface NUImageGeometry : NSObject <NUTaggedSpaceMapping> {

	long long _orientation;
	id<NUTaggedSpaceMapping> _spaceMap;
	SCD_Struct_NU7 _renderScale;
	SCD_Struct_NU8 _extent;

}

@property (nonatomic,readonly) id<NUTaggedSpaceMapping> spaceMap;              //@synthesize spaceMap=_spaceMap - In the implementation block
@property (nonatomic,readonly) CGRect scaledExtent; 
@property (nonatomic,readonly) SCD_Struct_NU7 scaledSize; 
@property (nonatomic,readonly) SCD_Struct_NU8 extent;                          //@synthesize extent=_extent - In the implementation block
@property (nonatomic,readonly) SCD_Struct_NU7 size; 
@property (nonatomic,readonly) SCD_Struct_NU7 renderScale;                     //@synthesize renderScale=_renderScale - In the implementation block
@property (nonatomic,readonly) long long orientation;                          //@synthesize orientation=_orientation - In the implementation block
-(id)init;
-(SCD_Struct_NU7)size;
-(SCD_Struct_NU8)extent;
-(id)description;
-(SCD_Struct_NU7)renderScale;
-(SCD_Struct_NU7)scaledSize;
-(long long)orientation;
-(id<NUTaggedSpaceMapping>)spaceMap;
-(id)transformWithSourceSpace:(id)arg1 destinationSpace:(id)arg2 error:(out id*)arg3 ;
-(id)initWithExtent:(SCD_Struct_NU8)arg1 renderScale:(SCD_Struct_NU7)arg2 ;
-(id)initWithExtent:(SCD_Struct_NU8)arg1 renderScale:(SCD_Struct_NU7)arg2 orientation:(long long)arg3 ;
-(id)initWithExtent:(SCD_Struct_NU8)arg1 renderScale:(SCD_Struct_NU7)arg2 orientation:(long long)arg3 spaceMap:(id)arg4 ;
-(CGRect)scaledExtent;
@end

