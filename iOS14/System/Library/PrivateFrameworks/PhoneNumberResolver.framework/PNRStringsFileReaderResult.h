/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhoneNumberResolver.framework/PhoneNumberResolver
*/


@class NSString;

@interface PNRStringsFileReaderResult : NSObject {

	NSString* _country;
	NSString* _region;
	NSString* _city;

}

@property (nonatomic,retain) NSString * country;              //@synthesize country=_country - In the implementation block
@property (nonatomic,retain) NSString * region;               //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) NSString * city;                 //@synthesize city=_city - In the implementation block
@property (nonatomic,readonly) long long score; 
+(long long)maxPossibleScore;
-(NSString *)city;
-(NSString *)region;
-(void)setCity:(NSString *)arg1 ;
-(NSString *)country;
-(void)setRegion:(NSString *)arg1 ;
-(long long)score;
-(void)setCountry:(NSString *)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(BOOL)shouldOrderCityFirstForLanguage:(id)arg1 phoneNumberInCC:(id)arg2 ;
-(id)separatorForLanguage:(id)arg1 ;
-(id)initWithCountry:(id)arg1 region:(id)arg2 city:(id)arg3 ;
-(id)aggregateStringWhileInCountry:(id)arg1 forLanguage:(id)arg2 ccOfNumber:(id)arg3 ;
-(BOOL)isPlaceHolderForEmpty;
@end

