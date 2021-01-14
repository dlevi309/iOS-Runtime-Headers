/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNContactsLoggerProvider.h>

@protocol CNContactsLoggerProvider <NSObject>
@property (nonatomic,readonly) id<CNContactsLogger> contactsLogger; 
@property (nonatomic,readonly) id<CNSpotlightIndexingLogger> spotlightIndexingLogger; 
@property (nonatomic,readonly) id<CNRegulatoryLogger> regulatoryLogger; 
@property (nonatomic,readonly) id<CNFavoritesLogger> favoritesLogger; 
@property (nonatomic,readonly) id<CNGeminiLogger> geminiLogger; 
@property (nonatomic,readonly) id<CNAPITriageLogger> apiTriageLogger; 
@required
-(id<CNFavoritesLogger>)favoritesLogger;
-(id<CNGeminiLogger>)geminiLogger;
-(id<CNSpotlightIndexingLogger>)spotlightIndexingLogger;
-(id<CNContactsLogger>)contactsLogger;
-(id<CNRegulatoryLogger>)regulatoryLogger;
-(id<CNAPITriageLogger>)apiTriageLogger;

@end


@protocol CNContactsLogger, CNSpotlightIndexingLogger, CNRegulatoryLogger, CNFavoritesLogger, CNGeminiLogger, CNAPITriageLogger;
@class NSString;

@interface CNContactsLoggerProvider : NSObject <CNContactsLoggerProvider> {

	id<CNContactsLogger> _contactsLogger;
	id<CNSpotlightIndexingLogger> _spotlightIndexingLogger;
	id<CNRegulatoryLogger> _regulatoryLogger;
	id<CNFavoritesLogger> _favoritesLogger;
	id<CNGeminiLogger> _geminiLogger;
	id<CNAPITriageLogger> _apiTriageLogger;

}

@property (nonatomic,readonly) id<CNContactsLogger> contactsLogger; 
@property (nonatomic,readonly) id<CNSpotlightIndexingLogger> spotlightIndexingLogger; 
@property (nonatomic,readonly) id<CNRegulatoryLogger> regulatoryLogger; 
@property (nonatomic,readonly) id<CNFavoritesLogger> favoritesLogger; 
@property (nonatomic,readonly) id<CNGeminiLogger> geminiLogger; 
@property (nonatomic,readonly) id<CNAPITriageLogger> apiTriageLogger; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProvider;
-(id<CNFavoritesLogger>)favoritesLogger;
-(id<CNGeminiLogger>)geminiLogger;
-(id<CNSpotlightIndexingLogger>)spotlightIndexingLogger;
-(id<CNContactsLogger>)contactsLogger;
-(id<CNRegulatoryLogger>)regulatoryLogger;
-(id<CNAPITriageLogger>)apiTriageLogger;
@end

