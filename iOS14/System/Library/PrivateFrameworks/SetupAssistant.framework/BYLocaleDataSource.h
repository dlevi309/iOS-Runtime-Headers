/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@class NSString, NSMutableArray;

@interface BYLocaleDataSource : NSObject {

	BOOL _hasRecommendedLocaleFromLanguage;
	NSString* _language;
	NSMutableArray* _suggestedCountries;
	NSMutableArray* _moreCountries;

}

@property (nonatomic,retain) NSMutableArray * suggestedCountries;                //@synthesize suggestedCountries=_suggestedCountries - In the implementation block
@property (nonatomic,retain) NSMutableArray * moreCountries;                     //@synthesize moreCountries=_moreCountries - In the implementation block
@property (assign,nonatomic) BOOL hasRecommendedLocaleFromLanguage;              //@synthesize hasRecommendedLocaleFromLanguage=_hasRecommendedLocaleFromLanguage - In the implementation block
@property (nonatomic,copy) NSString * language;                                  //@synthesize language=_language - In the implementation block
+(id)newWithLanguage:(id)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setSuggestedCountries:(NSMutableArray *)arg1 ;
-(void)setMoreCountries:(NSMutableArray *)arg1 ;
-(void)setHasRecommendedLocaleFromLanguage:(BOOL)arg1 ;
-(NSMutableArray *)suggestedCountries;
-(NSMutableArray *)moreCountries;
-(unsigned long long)numberOfRecommendedLocales;
-(unsigned long long)numberOfOtherLocales;
-(id)recommendedLocaleAtIndex:(unsigned long long)arg1 ;
-(id)otherLocaleAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRecommendedLocaleFromLanguage;
-(void)reloadData;
-(NSString *)language;
@end

