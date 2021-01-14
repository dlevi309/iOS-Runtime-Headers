/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUTileInfo : NSObject {

	long long _index;
	SCD_Struct_NU7 _size;
	SCD_Struct_NU8 _frameRect;
	SCD_Struct_NU8 _contentRect;

}

@property (nonatomic,readonly) long long index;                         //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) SCD_Struct_NU7 size;                     //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) SCD_Struct_NU8 frameRect;                //@synthesize frameRect=_frameRect - In the implementation block
@property (nonatomic,readonly) SCD_Struct_NU8 contentRect;              //@synthesize contentRect=_contentRect - In the implementation block
+(id)tileInfoWithIndex:(long long)arg1 size:(SCD_Struct_NU7)arg2 frameRect:(SCD_Struct_NU8)arg3 contentRect:(SCD_Struct_NU8)arg4 ;
-(long long)index;
-(SCD_Struct_NU8)contentRect;
-(SCD_Struct_NU7)size;
-(id)debugDescription;
-(id)translatedAndClippedRegion:(id)arg1 ;
-(SCD_Struct_NU8)frameRect;
@end

