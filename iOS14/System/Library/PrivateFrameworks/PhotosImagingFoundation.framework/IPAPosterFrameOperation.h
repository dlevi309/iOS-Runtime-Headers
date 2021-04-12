/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAVideoOperation.h>

@interface IPAPosterFrameOperation : IPAVideoOperation {

	SCD_Struct_IP1 _frameTime;

}

@property (nonatomic,readonly) SCD_Struct_IP1 frameTime;              //@synthesize frameTime=_frameTime - In the implementation block
-(id)initWithOperation:(id)arg1 ;
-(SCD_Struct_IP1)frameTime;
-(id)debugDescription;
-(id)settingsDictionary;
-(id)identifier;
-(id)initWithSettingsDictionary:(id)arg1 ;
-(BOOL)isEqualToOperation:(id)arg1 ;
-(BOOL)isMigratable;
-(id)initWithFrameTime:(SCD_Struct_IP1)arg1 ;
@end

