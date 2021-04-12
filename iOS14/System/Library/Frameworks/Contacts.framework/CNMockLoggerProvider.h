/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNContactsLoggerProvider.h>

@protocol CNContactsLogger, CNSpotlightIndexingLogger, CNRegulatoryLogger, CNFavoritesLogger, CNGeminiLogger, CNAPITriageLogger;
@class NSString;

@interface CNMockLoggerProvider : NSObject <CNContactsLoggerProvider> {

	id<CNContactsLogger> _contactsLogger;
	id<CNSpotlightIndexingLogger> _spotlightIndexingLogger;
	id<CNRegulatoryLogger> _regulatoryLogger;
	id<CNFavoritesLogger> _favoritesLogger;
	id<CNGeminiLogger> _geminiLogger;
	id<CNAPITriageLogger> _apiTriageLogger;

}

@property (nonatomic,retain) id<CNContactsLogger> contactsLogger;                                //@synthesize contactsLogger=_contactsLogger - In the implementation block
@property (nonatomic,retain) id<CNSpotlightIndexingLogger> spotlightIndexingLogger;              //@synthesize spotlightIndexingLogger=_spotlightIndexingLogger - In the implementation block
@property (nonatomic,retain) id<CNRegulatoryLogger> regulatoryLogger;                            //@synthesize regulatoryLogger=_regulatoryLogger - In the implementation block
@property (nonatomic,retain) id<CNFavoritesLogger> favoritesLogger;                              //@synthesize favoritesLogger=_favoritesLogger - In the implementation block
@property (nonatomic,retain) id<CNGeminiLogger> geminiLogger;                                    //@synthesize geminiLogger=_geminiLogger - In the implementation block
@property (nonatomic,retain) id<CNAPITriageLogger> apiTriageLogger;                              //@synthesize apiTriageLogger=_apiTriageLogger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loggerProvider;
-(id<CNFavoritesLogger>)favoritesLogger;
-(id<CNGeminiLogger>)geminiLogger;
-(id<CNSpotlightIndexingLogger>)spotlightIndexingLogger;
-(void)setContactsLogger:(id<CNContactsLogger>)arg1 ;
-(void)setGeminiLogger:(id<CNGeminiLogger>)arg1 ;
-(void)setFavoritesLogger:(id<CNFavoritesLogger>)arg1 ;
-(void)setSpotlightIndexingLogger:(id<CNSpotlightIndexingLogger>)arg1 ;
-(void)setApiTriageLogger:(id<CNAPITriageLogger>)arg1 ;
-(void)setRegulatoryLogger:(id<CNRegulatoryLogger>)arg1 ;
-(id<CNContactsLogger>)contactsLogger;
-(id<CNRegulatoryLogger>)regulatoryLogger;
-(id<CNAPITriageLogger>)apiTriageLogger;
@end

