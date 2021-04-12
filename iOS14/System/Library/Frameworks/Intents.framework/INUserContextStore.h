/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@class CKKnowledgeStore;

@interface INUserContextStore : NSObject {

	CKKnowledgeStore* _knowledgeStore;

}
+(id)sharedStore;
+(id)findDataInValue:(id)arg1 ;
+(id)keyForBundleIdentifier:(id)arg1 andType:(long long)arg2 ;
-(void)storeUserContext:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)_init;
-(id)_initWithKnowledgeStore:(id)arg1 ;
-(void)removeUserContextOfClass:(Class)arg1 forBundleIdentifier:(id)arg2 ;
-(void)storeUserContextViaHelper:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)userContextOfClass:(Class)arg1 forBundleIdentifiers:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

