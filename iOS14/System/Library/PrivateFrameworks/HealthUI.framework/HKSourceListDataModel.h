/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


#import <HealthUI/HealthUI-Structs.h>
@class NSSet, NSArray;

@interface HKSourceListDataModel : NSObject {

	NSSet* _allSources;
	NSArray* _orderedAppSources;
	NSArray* _orderedUninstalledAppSources;
	NSArray* _orderedResearchStudySources;
	NSArray* _orderedDeviceSources;
	NSArray* _orderedClinicalSources;

}

@property (nonatomic,copy,readonly) NSSet * allSources;                                  //@synthesize allSources=_allSources - In the implementation block
@property (nonatomic,copy,readonly) NSArray * orderedAppSources;                         //@synthesize orderedAppSources=_orderedAppSources - In the implementation block
@property (nonatomic,copy,readonly) NSArray * orderedUninstalledAppSources;              //@synthesize orderedUninstalledAppSources=_orderedUninstalledAppSources - In the implementation block
@property (nonatomic,copy,readonly) NSArray * orderedResearchStudySources;               //@synthesize orderedResearchStudySources=_orderedResearchStudySources - In the implementation block
@property (nonatomic,copy,readonly) NSArray * orderedDeviceSources;                      //@synthesize orderedDeviceSources=_orderedDeviceSources - In the implementation block
@property (nonatomic,copy,readonly) NSArray * orderedClinicalSources;                    //@synthesize orderedClinicalSources=_orderedClinicalSources - In the implementation block
-(void)_sortSources:(id)arg1 ;
-(NSArray *)orderedUninstalledAppSources;
-(NSSet *)allSources;
-(NSArray *)orderedAppSources;
-(NSArray *)orderedResearchStudySources;
-(NSArray *)orderedDeviceSources;
-(id)initWithSources:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSourceModels:(id)arg1 ;
-(NSArray *)orderedClinicalSources;
@end

