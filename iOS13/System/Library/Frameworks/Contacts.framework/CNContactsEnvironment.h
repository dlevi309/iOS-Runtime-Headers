/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CNSchedulerProvider, SGSuggestionsServiceContactsProtocol, CNSiriIntelligenceSettingsProtocol, CNContactsLoggerProvider;
@class CNiOSAddressBook, NSURL, NSArray, CNiOSABPredicateRunner;

@interface CNContactsEnvironment : NSObject <NSCopying> {

	CNiOSAddressBook* _addressBook;
	id<CNSchedulerProvider> _schedulerProvider;
	NSURL* _baseURL;
	id<SGSuggestionsServiceContactsProtocol> _suggestionsService;
	id<CNSiriIntelligenceSettingsProtocol> _siriIntelligenceSettings;
	NSArray* _delegateInfos;
	CNiOSABPredicateRunner* _abPredicateRunner;
	id<CNContactsLoggerProvider> _loggerProvider;

}

@property (nonatomic,retain) NSArray * delegateInfos;                                                      //@synthesize delegateInfos=_delegateInfos - In the implementation block
@property (nonatomic,retain) CNiOSABPredicateRunner * abPredicateRunner;                                   //@synthesize abPredicateRunner=_abPredicateRunner - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                                  //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNContactsLoggerProvider> loggerProvider;                                //@synthesize loggerProvider=_loggerProvider - In the implementation block
@property (nonatomic,readonly) CNiOSAddressBook * addressBook; 
@property (nonatomic,copy) NSURL * baseURL;                                                                //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) id<SGSuggestionsServiceContactsProtocol> suggestionsService;                  //@synthesize suggestionsService=_suggestionsService - In the implementation block
@property (nonatomic,retain) id<CNSiriIntelligenceSettingsProtocol> siriIntelligenceSettings;              //@synthesize siriIntelligenceSettings=_siriIntelligenceSettings - In the implementation block
@property (nonatomic,readonly) BOOL useInMemoryStores; 
+(BOOL)supportsSecureCoding;
+(id)currentEnvironment;
+(id)baseURLWithDataLocationName:(id)arg1 ;
+(id)unitTestingEnvironmentWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2 ;
+(id)inMemoryURL;
+(id)unitTestingEnvironmentWithDataLocationName:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3 ;
+(id)unitTestingEnvironment;
+(id)unitTestingEnvironmentWithDataLocationName:(id)arg1 ;
+(id)unitTestingEnvironmentWithDataLocationName:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id<CNContactsLoggerProvider>)loggerProvider;
-(id)copyWithDelegateInfos:(id)arg1 ;
-(BOOL)useInMemoryStores;
-(CNiOSABPredicateRunner *)abPredicateRunner;
-(CNiOSAddressBook *)addressBook;
-(id)initWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2 ;
-(void)setDelegateInfos:(NSArray *)arg1 ;
-(void)setAddressBook:(CNiOSAddressBook *)arg1 ;
-(void)makeCurrentEnvironment;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id<SGSuggestionsServiceContactsProtocol>)suggestionsService;
-(void)setSuggestionsService:(id<SGSuggestionsServiceContactsProtocol>)arg1 ;
-(id<CNSiriIntelligenceSettingsProtocol>)siriIntelligenceSettings;
-(void)setSiriIntelligenceSettings:(id<CNSiriIntelligenceSettingsProtocol>)arg1 ;
-(NSArray *)delegateInfos;
-(void)setAbPredicateRunner:(CNiOSABPredicateRunner *)arg1 ;
@end

