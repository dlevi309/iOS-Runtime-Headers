/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNContactsLoggerProvider.h>

@protocol CNContactsLogger, CNSpotlightIndexingLogger, CNRegulatoryLogger, CNFavoritesLogger, CNGeminiLogger;
@class NSString;

@interface CNMockLoggerProvider : NSObject <CNContactsLoggerProvider> {

	id<CNContactsLogger> _contactsLogger;
	id<CNSpotlightIndexingLogger> _spotlightIndexingLogger;
	id<CNRegulatoryLogger> _regulatoryLogger;
	id<CNFavoritesLogger> _favoritesLogger;
	id<CNGeminiLogger> _geminiLogger;

}

@property (nonatomic,retain) id<CNContactsLogger> contactsLogger;                                //@synthesize contactsLogger=_contactsLogger - In the implementation block
@property (nonatomic,retain) id<CNSpotlightIndexingLogger> spotlightIndexingLogger;              //@synthesize spotlightIndexingLogger=_spotlightIndexingLogger - In the implementation block
@property (nonatomic,retain) id<CNRegulatoryLogger> regulatoryLogger;                            //@synthesize regulatoryLogger=_regulatoryLogger - In the implementation block
@property (nonatomic,retain) id<CNFavoritesLogger> favoritesLogger;                              //@synthesize favoritesLogger=_favoritesLogger - In the implementation block
@property (nonatomic,retain) id<CNGeminiLogger> geminiLogger;                                    //@synthesize geminiLogger=_geminiLogger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loggerProvider;
-(id<CNSpotlightIndexingLogger>)spotlightIndexingLogger;
-(id<CNContactsLogger>)contactsLogger;
-(id<CNRegulatoryLogger>)regulatoryLogger;
-(id<CNFavoritesLogger>)favoritesLogger;
-(id<CNGeminiLogger>)geminiLogger;
-(void)setContactsLogger:(id<CNContactsLogger>)arg1 ;
-(void)setSpotlightIndexingLogger:(id<CNSpotlightIndexingLogger>)arg1 ;
-(void)setFavoritesLogger:(id<CNFavoritesLogger>)arg1 ;
-(void)setGeminiLogger:(id<CNGeminiLogger>)arg1 ;
-(void)setRegulatoryLogger:(id<CNRegulatoryLogger>)arg1 ;
@end

