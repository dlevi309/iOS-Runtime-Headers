/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@class NSDictionary;

@interface PILongExposureRegistrationRequest : NURenderRequest {

	NSDictionary* _recipe;
	SCD_Struct_PI6 _cleanAperture;

}

@property (nonatomic,copy) NSDictionary * recipe;                       //@synthesize recipe=_recipe - In the implementation block
@property (assign,nonatomic) SCD_Struct_PI6 cleanAperture;              //@synthesize cleanAperture=_cleanAperture - In the implementation block
-(NSDictionary *)recipe;
-(void)setRecipe:(NSDictionary *)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(SCD_Struct_PI6)cleanAperture;
-(void)setCleanAperture:(SCD_Struct_PI6)arg1 ;
@end

