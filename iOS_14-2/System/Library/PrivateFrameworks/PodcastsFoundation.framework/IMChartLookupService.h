/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <PodcastsFoundation/IMBasePlatformLookupService.h>

@class NSString;

@interface IMChartLookupService : IMBasePlatformLookupService {

	BOOL _filterExplicit;
	NSString* _genreId;
	NSString* _chartNumber;
	NSString* _contentProfile;
	NSString* _contentArtworkType;
	unsigned long long _limit;

}

@property (nonatomic,retain) NSString * genreId;                         //@synthesize genreId=_genreId - In the implementation block
@property (nonatomic,retain) NSString * chartNumber;                     //@synthesize chartNumber=_chartNumber - In the implementation block
@property (nonatomic,retain) NSString * contentProfile;                  //@synthesize contentProfile=_contentProfile - In the implementation block
@property (nonatomic,retain) NSString * contentArtworkType;              //@synthesize contentArtworkType=_contentArtworkType - In the implementation block
@property (assign) unsigned long long limit;                             //@synthesize limit=_limit - In the implementation block
@property (assign) BOOL filterExplicit;                                  //@synthesize filterExplicit=_filterExplicit - In the implementation block
-(void)setLimit:(unsigned long long)arg1 ;
-(void)setGenreId:(NSString *)arg1 ;
-(unsigned long long)limit;
-(id)urlRequest;
-(void)performRequest:(/*^block*/id)arg1 ;
-(NSString *)genreId;
-(void)request:(/*^block*/id)arg1 ;
-(id)platformAction;
-(void)setChartNumber:(NSString *)arg1 ;
-(NSString *)chartNumber;
-(BOOL)filterExplicit;
-(NSString *)contentProfile;
-(NSString *)contentArtworkType;
-(id)initWithGenreId:(id)arg1 andChartNumber:(id)arg2 ;
-(void)setContentProfile:(NSString *)arg1 ;
-(void)setContentArtworkType:(NSString *)arg1 ;
-(void)setFilterExplicit:(BOOL)arg1 ;
@end

