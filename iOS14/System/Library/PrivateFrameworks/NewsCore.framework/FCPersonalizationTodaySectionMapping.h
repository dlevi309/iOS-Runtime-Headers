/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPBTodaySectionMapping:(id)arg1 ;
-(NSDictionary *)todaySectionIdentifiersToFRGroupViewExposureTypes;
-(id)groupViewExposureTypesForTodaySectionIdentifier:(id)arg1 ;
-(void)setTodaySectionIdentifiersToFRGroupViewExposureTypes:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

