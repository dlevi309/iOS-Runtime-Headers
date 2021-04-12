/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNContactsLoggerProvider.h>

@protocol CNContactsLoggerProvider <NSObject>
@property (nonatomic,readonly) id<CNContactsLogger> contactsLogger; 
@property (nonatomic,readonly) id<CNSpotlightIndexingLogger> spotlightIndexingLogger; 
@property (nonatomic,readonly) id<CNRegulatoryLogger> regulatoryLogger; 
@property (nonatomic,readonly) id<CNFavoritesLogger> favoritesLogger; 
@property (nonatomic,readonly) id<CNGeminiLogger> geminiLogger; 
@required
-(id<CNSpotlightIndexingLogger>)spotlightIndexingLogger;
-(id<CNContactsLogger>)contactsLogger;
-(id<CNRegulatoryLogger>)regulatoryLogger;
-(id<CNFavoritesLogger>)favoritesLogger;
-(id<CNGeminiLogger>)geminiLogger;

@end


@protocol CNContactsLogger, CNSpotlightIndexingLogger, CNRegulatoryLogger, CNFavoritesLogger, CNGeminiLogger;
@class NSString;

@interface CNContactsLoggerProvider : NSObject <CNContactsLoggerProvider> {

	id<CNContactsLogger> _contactsLogger;
	id<CNSpotlightIndexingLogger> _spotlightIndexingLogger;
	id<CNRegulatoryLogger> _regulatoryLogger;
	id<CNFavoritesLogger> _favoritesLogger;
	id<CNGeminiLogger> _geminiLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CNContactsLogger> contactsLogger; 
@property (nonatomic,readonly) id<CNSpotlightIndexingLogger> spotlightIndexingLogger; 
@property (nonatomic,readonly) id<CNRegulatoryLogger> regulatoryLogger; 
@property (nonatomic,readonly) id<CNFavoritesLogger> favoritesLogger; 
@property (nonatomic,readonly) id<CNGeminiLogger> geminiLogger; 
+(id)defaultProvider;
-(id<CNSpotlightIndexingLogger>)spotlightIndexingLogger;
-(id<CNContactsLogger>)contactsLogger;
-(id<CNRegulatoryLogger>)regulatoryLogger;
-(id<CNFavoritesLogger>)favoritesLogger;
-(id<CNGeminiLogger>)geminiLogger;
@end

