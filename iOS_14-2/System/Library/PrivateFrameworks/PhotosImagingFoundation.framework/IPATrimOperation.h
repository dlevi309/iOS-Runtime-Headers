/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithOperation:(id)arg1 ;
-(id)debugDescription;
-(id)settingsDictionary;
-(id)identifier;
-(id)initWithStartTime:(SCD_Struct_IP1)arg1 endTime:(SCD_Struct_IP1)arg2 ;
-(SCD_Struct_IP2)trimRange;
-(SCD_Struct_IP1)endTime;
-(SCD_Struct_IP1)startTime;
-(id)initWithSettingsDictionary:(id)arg1 ;
-(BOOL)isEqualToOperation:(id)arg1 ;
-(id)initWithTrimRange:(SCD_Struct_IP2)arg1 ;
-(id)trimRangeDictionary;
@end

