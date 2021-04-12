/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableDictionary, NSMutableArray, NSMapTable;

@interface UIWebGeolocationPolicyDecider : NSObject {

	NSMutableDictionary* _sites;
	NSMutableArray* _challenges;
	NSMapTable* _activeChallenges;

}
+(void)initialize;
+(id)sharedPolicyDecider;
-(id)init;
-(void)dealloc;
-(void)clearCache;
-(void)_load;
-(void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4 ;
-(id)_siteFileInContainerDirectory:(id)arg1 creatingIntermediateDirectoriesIfNecessary:(BOOL)arg2 ;
-(id)_siteFile;
-(BOOL)_isAuthorizationDate:(id)arg1 inclusivelyBetweenDate:(id)arg2 andDate:(id)arg3 ;
-(void)_save;
-(long long)_getChallengeCountFromHistoryForToken:(id)arg1 requestingURL:(id)arg2 ;
-(BOOL)_getAuthorizationStatusForToken:(id)arg1 requestingURL:(id)arg2 promptInfo:(id*)arg3 ;
-(void)_addChallengeCount:(long long)arg1 forToken:(id)arg2 requestingURL:(id)arg3 ;
-(void)_executeNextChallenge;
-(void)_decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 view:(id)arg3 listener:(id)arg4 ;
-(void)decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 view:(id)arg3 listener:(id)arg4 ;
-(void)clearAllCaches;
-(void)clearAuthorizationsAddedBetween:(id)arg1 and:(id)arg2 ;
-(BOOL)getAuthorizationStatusForOrigin:(id)arg1 requestingURL:(id)arg2 promptInfo:(id*)arg3 ;
-(void)decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 window:(id)arg3 listener:(id)arg4 ;
-(void)didAuthorizeGeolocationForPromptInfo:(id)arg1 ;
-(void)didDenyGeolocationForPromptInfo:(id)arg1 ;
@end

