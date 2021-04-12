/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <libobjc.A.dylib/UMUserPersonaUpdateObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, ACAccountStore;

@interface ACPersonaManager : NSObject <UMUserPersonaUpdateObserver> {

	NSObject*<OS_dispatch_queue> _backgroundPersonaUpdate;
	BOOL _registered;
	NSString* _enterprisePersonaUID;
	NSString* _personalPersonaUID;
	ACAccountStore* _store;

}

@property (nonatomic,copy,readonly) NSString * enterprisePersonaUID; 
@property (nonatomic,copy,readonly) NSString * personalPersonaUID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)performWithinPersonaForAccount:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(BOOL)performWithinPersona:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(void)_changePersonaContextUsingPersonaID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)performWithinPersonaForAccountIdentifier:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)init;
-(id)store;
-(void)personaListDidUpdate;
-(NSString *)enterprisePersonaUID;
-(void)updateEnterprisePersona;
-(void)_registerForPersonaListUpdateWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)personalPersonaUID;
@end

