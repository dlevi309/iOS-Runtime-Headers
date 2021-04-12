/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSDictionary;

@interface FCPersonalizationURLDomainMapping : NSObject {

	double _averageSafariVisitsPerDay;
	NSDictionary* _paths;

}

@property (assign,nonatomic) double averageSafariVisitsPerDay;              //@synthesize averageSafariVisitsPerDay=_averageSafariVisitsPerDay - In the implementation block
@property (nonatomic,retain) NSDictionary * paths;                          //@synthesize paths=_paths - In the implementation block
-(void)setPaths:(NSDictionary *)arg1 ;
-(NSDictionary *)paths;
-(double)averageSafariVisitsPerDay;
-(id)initWithPBURLMappingDomain:(id)arg1 ;
-(id)tagsForPath:(id)arg1 ;
-(void)setAverageSafariVisitsPerDay:(double)arg1 ;
@end

