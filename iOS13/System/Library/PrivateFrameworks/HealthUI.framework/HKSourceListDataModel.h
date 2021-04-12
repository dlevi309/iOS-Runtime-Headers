/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)allSources;
-(id)initWithSources:(id)arg1 ;
-(NSArray *)orderedResearchStudySources;
-(NSArray *)orderedAppSources;
-(NSArray *)orderedUninstalledAppSources;
-(NSArray *)orderedDeviceSources;
-(id)initWithSourceModels:(id)arg1 ;
-(void)_sortSources:(id)arg1 ;
-(NSArray *)orderedClinicalSources;
@end

