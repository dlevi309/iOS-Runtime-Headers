/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSMutableDictionary, ENAuthCacheEntry;

@interface ENAuthCache : NSObject {

	NSMutableDictionary* _linkedCache;
	ENAuthCacheEntry* _businessCache;

}

@property (nonatomic,retain) NSMutableDictionary * linkedCache;              //@synthesize linkedCache=_linkedCache - In the implementation block
@property (nonatomic,retain) ENAuthCacheEntry * businessCache;               //@synthesize businessCache=_businessCache - In the implementation block
-(id)init;
-(void)setAuthenticationResult:(id)arg1 forLinkedNotebookGuid:(id)arg2 ;
-(id)authenticationResultForLinkedNotebookGuid:(id)arg1 ;
-(void)setAuthenticationResultForBusiness:(id)arg1 ;
-(id)authenticationResultForBusiness;
-(NSMutableDictionary *)linkedCache;
-(void)setLinkedCache:(NSMutableDictionary *)arg1 ;
-(ENAuthCacheEntry *)businessCache;
-(void)setBusinessCache:(ENAuthCacheEntry *)arg1 ;
@end

