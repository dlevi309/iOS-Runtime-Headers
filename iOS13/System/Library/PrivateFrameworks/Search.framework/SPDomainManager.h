/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/


@interface SPDomainManager : NSObject
+(void)initialize;
+(id)defaultManager;
-(void)_removeAllDomainsForDisplayIdentifier:(id)arg1 ;
-(void)notifyIndexer;
-(id)getBundleIdForDomainNumber:(id)arg1 ;
-(void)registerApplication:(id)arg1 withCategories:(id)arg2 ;
-(void)applicationWasUninstalled:(id)arg1 ;
-(BOOL)siriSuggestionsEnabled;
@end

