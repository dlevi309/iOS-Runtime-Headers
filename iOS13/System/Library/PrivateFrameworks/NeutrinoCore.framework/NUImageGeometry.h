/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(SCD_Struct_NU7)size;
-(long long)orientation;
-(SCD_Struct_NU8)extent;
-(SCD_Struct_NU7)scaledSize;
-(SCD_Struct_NU7)renderScale;
-(id)transformWithSourceSpace:(id)arg1 destinationSpace:(id)arg2 error:(out id*)arg3 ;
-(id)initWithExtent:(SCD_Struct_NU8)arg1 renderScale:(SCD_Struct_NU7)arg2 ;
-(id)initWithExtent:(SCD_Struct_NU8)arg1 renderScale:(SCD_Struct_NU7)arg2 orientation:(long long)arg3 ;
-(id)initWithExtent:(SCD_Struct_NU8)arg1 renderScale:(SCD_Struct_NU7)arg2 orientation:(long long)arg3 spaceMap:(id)arg4 ;
-(CGRect)scaledExtent;
-(id<NUTaggedSpaceMapping>)spaceMap;
@end

