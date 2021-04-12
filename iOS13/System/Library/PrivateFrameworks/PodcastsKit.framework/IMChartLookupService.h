/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/IMBasePlatformLookupService.h>

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
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(void)request:(/*^block*/id)arg1 ;
-(id)urlRequest;
-(void)performRequest:(/*^block*/id)arg1 ;
-(void)setGenreId:(NSString *)arg1 ;
-(NSString *)genreId;
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

