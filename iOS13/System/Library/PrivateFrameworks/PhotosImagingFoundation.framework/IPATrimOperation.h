/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAVideoOperation.h>

@interface IPATrimOperation : IPAVideoOperation {

	SCD_Struct_IP1 _startTime;
	SCD_Struct_IP1 _endTime;

}

@property (nonatomic,readonly) SCD_Struct_IP1 startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IP1 endTime;                //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IP2 trimRange; 
-(id)debugDescription;
-(id)identifier;
-(SCD_Struct_IP1)startTime;
-(SCD_Struct_IP1)endTime;
-(id)initWithOperation:(id)arg1 ;
-(id)initWithStartTime:(SCD_Struct_IP1)arg1 endTime:(SCD_Struct_IP1)arg2 ;
-(id)settingsDictionary;
-(SCD_Struct_IP2)trimRange;
-(id)initWithSettingsDictionary:(id)arg1 ;
-(BOOL)isEqualToOperation:(id)arg1 ;
-(id)initWithTrimRange:(SCD_Struct_IP2)arg1 ;
-(id)trimRangeDictionary;
@end

