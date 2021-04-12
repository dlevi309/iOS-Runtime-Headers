/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHAssetPropertySet.h>

@interface PHAssetPhotoIrisProperties : PHAssetPropertySet {

	unsigned short _photoIrisVisibilityState;
	SCD_Struct_PH9 _photoIrisStillDisplayTime;
	SCD_Struct_PH9 _photoIrisVideoDuration;

}

@property (nonatomic,readonly) SCD_Struct_PH9 photoIrisStillDisplayTime;              //@synthesize photoIrisStillDisplayTime=_photoIrisStillDisplayTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PH9 photoIrisVideoDuration;                 //@synthesize photoIrisVideoDuration=_photoIrisVideoDuration - In the implementation block
@property (nonatomic,readonly) unsigned short photoIrisVisibilityState;               //@synthesize photoIrisVisibilityState=_photoIrisVisibilityState - In the implementation block
+(id)propertySetName;
+(id)propertiesToFetch;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(SCD_Struct_PH9)photoIrisStillDisplayTime;
-(SCD_Struct_PH9)photoIrisVideoDuration;
-(unsigned short)photoIrisVisibilityState;
@end

