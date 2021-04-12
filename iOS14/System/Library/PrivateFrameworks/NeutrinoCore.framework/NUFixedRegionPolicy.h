/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NURegionPolicy.h>

@class NURegion, NSString;

@interface NUFixedRegionPolicy : NSObject <NURegionPolicy> {

	long long _roundingPolicy;
	NURegion* _region;
	SCD_Struct_NU7 _scale;

}

@property (assign) SCD_Struct_NU7 scale;                            //@synthesize scale=_scale - In the implementation block
@property (assign) long long roundingPolicy;                        //@synthesize roundingPolicy=_roundingPolicy - In the implementation block
@property (readonly) NURegion * region;                             //@synthesize region=_region - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NURegion *)region;
-(id)init;
-(SCD_Struct_NU7)scale;
-(NSString *)description;
-(id)initWithRegion:(id)arg1 ;
-(void)setScale:(SCD_Struct_NU7)arg1 ;
-(id)initWithRect:(SCD_Struct_NU8)arg1 ;
-(long long)roundingPolicy;
-(void)setRoundingPolicy:(long long)arg1 ;
-(id)regionForGeometry:(id)arg1 ;
@end

