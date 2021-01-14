/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponent.h>

@class SXDataRecordStore, SXJSONArray;

@interface SXDataTableComponent : SXComponent

@property (nonatomic,readonly) SXDataRecordStore * data; 
@property (nonatomic,readonly) SXJSONArray * sortBy; 
@property (nonatomic,readonly) unsigned long long dataOrientation; 
@property (nonatomic,readonly) BOOL showDescriptorLabels; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(BOOL)showDescriptorLabels;
-(unsigned long long)dataOrientation;
-(SXJSONArray *)sortBy;
-(SXDataRecordStore *)data;
-(unsigned long long)dataOrientationWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)showDescriptorLabelsWithValue:(id)arg1 withType:(int)arg2 ;
@end

