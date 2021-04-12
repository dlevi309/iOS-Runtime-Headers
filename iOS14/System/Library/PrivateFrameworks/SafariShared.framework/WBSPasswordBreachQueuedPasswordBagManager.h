/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSPasswordBreachCredentialSource, OS_dispatch_queue;
@class WBSPasswordBreachContext, WBSPasswordBreachResults, NSMutableDictionary, NSObject, NSDictionary;

@interface WBSPasswordBreachQueuedPasswordBagManager : NSObject {

	WBSPasswordBreachContext* _context;
	WBSPasswordBreachResults* _results;
	id<WBSPasswordBreachCredentialSource> _credentialSource;
	NSMutableDictionary* _queuedPasswordsByUUID;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (nonatomic,copy,readonly) NSDictionary * allNonbreachedPasswords; 
-(id)_passwordBagFromDictionaryRepresentation:(id)arg1 ;
-(id)_constructNewBagOnInternalQueue;
-(id)_unbreachedCredentials;
-(id)_dictionaryRepresentation;
-(id)initWithContext:(id)arg1 results:(id)arg2 passwordSource:(id)arg3 ;
-(void)getPasswordsForNextBatchWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)allNonbreachedPasswords;
-(void)reportPasswordCheckBatchResults:(id)arg1 ;
-(id)description;
@end

