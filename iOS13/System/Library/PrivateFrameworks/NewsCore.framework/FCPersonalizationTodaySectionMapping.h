/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


#import <NewsCore/NewsCore-Structs.h>
@class NTPBTodaySectionsMapping, NSDictionary;

@interface FCPersonalizationTodaySectionMapping : NSObject {

	NTPBTodaySectionsMapping* _pbTodaySectionMapping;
	NSDictionary* _todaySectionIdentifiersToFRGroupViewExposureTypes;

}

@property (nonatomic,retain) NSDictionary * todaySectionIdentifiersToFRGroupViewExposureTypes;              //@synthesize todaySectionIdentifiersToFRGroupViewExposureTypes=_todaySectionIdentifiersToFRGroupViewExposureTypes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPBTodaySectionMapping:(id)arg1 ;
-(NSDictionary *)todaySectionIdentifiersToFRGroupViewExposureTypes;
-(id)groupViewExposureTypesForTodaySectionIdentifier:(id)arg1 ;
-(void)setTodaySectionIdentifiersToFRGroupViewExposureTypes:(NSDictionary *)arg1 ;
@end

