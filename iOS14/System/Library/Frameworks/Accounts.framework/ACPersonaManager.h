/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <libobjc.A.dylib/UMUserPersonaUpdateObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSSet, NSArray, ACAccountStore;

@interface ACPersonaManager : NSObject <UMUserPersonaUpdateObserver> {

	NSObject*<OS_dispatch_queue> _backgroundPersonaUpdate;
	BOOL _registered;
	NSString* _enterprisePersonaUID;
	NSString* _personalPersonaUID;
	NSSet* _guestPersonasUID;
	NSArray* _dataSeparatedPersonasUIDs;
	ACAccountStore* _store;

}

@property (nonatomic,copy,readonly) NSString * enterprisePersonaUID; 
@property (nonatomic,copy,readonly) NSString * personalPersonaUID; 
@property (nonatomic,copy,readonly) NSSet * guestPersonasUIDs; 
@property (nonatomic,copy,readonly) NSArray * dataSeparatedPersonasUIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)performWithinPersonaForAccountIdentifier:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(BOOL)performWithinPersona:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(void)performWithinPersonaForAccount:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(void)_changePersonaContextUsingPersonaID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init;
-(id)store;
-(NSString *)personalPersonaUID;
-(void)_registerForPersonaListUpdateWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)enterprisePersonaUID;
-(void)updatePersonasUIDs;
-(NSArray *)dataSeparatedPersonasUIDs;
-(NSSet *)guestPersonasUIDs;
-(void)personaListDidUpdate;
@end

