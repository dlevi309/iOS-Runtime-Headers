/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)debugDescription;
-(SCD_Struct_NU7)size;
-(long long)index;
-(SCD_Struct_NU8)contentRect;
-(SCD_Struct_NU8)frameRect;
-(id)translatedAndClippedRegion:(id)arg1 ;
@end

