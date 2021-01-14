/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@class NSDictionary;

@interface ACMBaseLocale : NSObject {

	ACMBaseLocale* _nextLocale;
	NSDictionary* _localeStrings;

}

@property (nonatomic,retain) ACMBaseLocale * nextLocale;                //@synthesize nextLocale=_nextLocale - In the implementation block
@property (nonatomic,retain) NSDictionary * localeStrings;              //@synthesize localeStrings=_localeStrings - In the implementation block
+(void)initialize;
+(id)sharedInstance;
+(id)localizedString:(id)arg1 ;
+(id)createLocaleForIdentifier:(id)arg1 ;
+(void)setupUsingPreferredLanguages;
+(void)setupRecoveringPreferredLanguages;
-(id)objectForKey:(id)arg1 ;
-(void)dealloc;
-(void)setNextLocale:(ACMBaseLocale *)arg1 ;
-(ACMBaseLocale *)nextLocale;
-(NSDictionary *)localeStrings;
-(void)setLocaleStrings:(NSDictionary *)arg1 ;
@end

