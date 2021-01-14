/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/


@interface SPDomainManager : NSObject
+(void)initialize;
+(id)defaultManager;
-(void)applicationWasUninstalled:(id)arg1 ;
-(BOOL)siriSuggestionsEnabled;
-(void)_removeAllDomainsForDisplayIdentifier:(id)arg1 ;
-(void)notifyIndexer;
-(id)getBundleIdForDomainNumber:(id)arg1 ;
-(void)registerApplication:(id)arg1 withCategories:(id)arg2 ;
@end

