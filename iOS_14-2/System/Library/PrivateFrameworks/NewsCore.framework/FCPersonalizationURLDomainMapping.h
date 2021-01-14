/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSDictionary;

@interface FCPersonalizationURLDomainMapping : NSObject {

	double _averageSafariVisitsPerDay;
	NSDictionary* _paths;

}

@property (assign,nonatomic) double averageSafariVisitsPerDay;              //@synthesize averageSafariVisitsPerDay=_averageSafariVisitsPerDay - In the implementation block
@property (nonatomic,retain) NSDictionary * paths;                          //@synthesize paths=_paths - In the implementation block
-(NSDictionary *)paths;
-(void)setPaths:(NSDictionary *)arg1 ;
-(double)averageSafariVisitsPerDay;
-(id)initWithPBURLMappingDomain:(id)arg1 ;
-(id)tagsForPath:(id)arg1 ;
-(void)setAverageSafariVisitsPerDay:(double)arg1 ;
@end

