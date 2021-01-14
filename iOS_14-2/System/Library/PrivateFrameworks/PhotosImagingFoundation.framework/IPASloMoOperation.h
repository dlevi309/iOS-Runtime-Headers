/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAVideoOperation.h>

@interface IPASloMoOperation : IPAVideoOperation {

	SCD_Struct_IP2 _timeRange;
	float _rate;

}

@property (nonatomic,readonly) float rate; 
@property (nonatomic,readonly) SCD_Struct_IP2 timeRange; 
+(id)operationFromFileURL:(id)arg1 ;
-(id)initWithOperation:(id)arg1 ;
-(SCD_Struct_IP2)timeRange;
-(id)debugDescription;
-(id)settingsDictionary;
-(float)rate;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)internalRepresentation;
-(id)initWithSettingsDictionary:(id)arg1 ;
-(BOOL)isEqualToOperation:(id)arg1 ;
-(BOOL)isMigratable;
-(id)initWithTimeRange:(SCD_Struct_IP2)arg1 rate:(float)arg2 ;
@end

