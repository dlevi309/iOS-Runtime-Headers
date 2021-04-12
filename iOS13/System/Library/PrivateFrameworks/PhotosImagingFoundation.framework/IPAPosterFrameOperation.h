/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAVideoOperation.h>

@interface IPAPosterFrameOperation : IPAVideoOperation {

	SCD_Struct_IP1 _frameTime;

}

@property (nonatomic,readonly) SCD_Struct_IP1 frameTime;              //@synthesize frameTime=_frameTime - In the implementation block
-(id)debugDescription;
-(id)identifier;
-(id)initWithOperation:(id)arg1 ;
-(id)settingsDictionary;
-(id)initWithSettingsDictionary:(id)arg1 ;
-(BOOL)isEqualToOperation:(id)arg1 ;
-(BOOL)isMigratable;
-(id)initWithFrameTime:(SCD_Struct_IP1)arg1 ;
-(SCD_Struct_IP1)frameTime;
@end

