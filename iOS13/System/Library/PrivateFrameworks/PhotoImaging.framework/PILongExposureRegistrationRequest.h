/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)recipe;
-(void)setRecipe:(NSDictionary *)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(SCD_Struct_PI6)cleanAperture;
-(void)setCleanAperture:(SCD_Struct_PI6)arg1 ;
@end

