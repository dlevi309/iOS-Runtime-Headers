/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)propertiesToFetch;
+(id)propertySetName;
-(SCD_Struct_PH9)photoIrisStillDisplayTime;
-(SCD_Struct_PH9)photoIrisVideoDuration;
-(unsigned short)photoIrisVisibilityState;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
@end

