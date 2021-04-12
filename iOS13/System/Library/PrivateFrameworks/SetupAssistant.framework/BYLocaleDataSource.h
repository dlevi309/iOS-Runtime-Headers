/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@class NSString, NSMutableArray;

@interface BYLocaleDataSource : NSObject {

	NSString* _language;
	NSMutableArray* _suggestedCountries;
	NSMutableArray* _moreCountries;

}

@property (nonatomic,retain) NSMutableArray * suggestedCountries;              //@synthesize suggestedCountries=_suggestedCountries - In the implementation block
@property (nonatomic,retain) NSMutableArray * moreCountries;                   //@synthesize moreCountries=_moreCountries - In the implementation block
@property (nonatomic,copy) NSString * language;                                //@synthesize language=_language - In the implementation block
+(id)newWithLanguage:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)reloadData;
-(void)setSuggestedCountries:(NSMutableArray *)arg1 ;
-(void)setMoreCountries:(NSMutableArray *)arg1 ;
-(NSMutableArray *)suggestedCountries;
-(NSMutableArray *)moreCountries;
-(unsigned long long)numberOfRecommendedLocales;
-(unsigned long long)numberOfOtherLocales;
-(id)recommendedLocaleAtIndex:(unsigned long long)arg1 ;
-(id)otherLocaleAtIndex:(unsigned long long)arg1 ;
@end

