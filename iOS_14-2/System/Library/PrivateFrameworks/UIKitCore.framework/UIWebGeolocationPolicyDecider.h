/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_save;
-(id)init;
-(void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4 ;
-(id)_siteFile;
-(void)clearAllCaches;
-(void)_addChallengeCount:(long long)arg1 forToken:(id)arg2 requestingURL:(id)arg3 ;
-(id)_siteFileInContainerDirectory:(id)arg1 creatingIntermediateDirectoriesIfNecessary:(BOOL)arg2 ;
-(BOOL)_isAuthorizationDate:(id)arg1 inclusivelyBetweenDate:(id)arg2 andDate:(id)arg3 ;
-(void)_executeNextChallenge;
-(long long)_getChallengeCountFromHistoryForToken:(id)arg1 requestingURL:(id)arg2 ;
-(void)clearSafariCache;
-(BOOL)_getAuthorizationStatusForToken:(id)arg1 requestingURL:(id)arg2 promptInfo:(id*)arg3 ;
-(void)_decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 view:(id)arg3 listener:(id)arg4 ;
-(void)decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 view:(id)arg3 listener:(id)arg4 ;
-(void)clearAuthorizationsAddedBetween:(id)arg1 and:(id)arg2 ;
-(void)didAuthorizeGeolocationForPromptInfo:(id)arg1 ;
-(BOOL)getAuthorizationStatusForOrigin:(id)arg1 requestingURL:(id)arg2 promptInfo:(id*)arg3 ;
-(void)decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 window:(id)arg3 listener:(id)arg4 ;
-(void)didDenyGeolocationForPromptInfo:(id)arg1 ;
-(void)clearCache;
-(void)_load;
-(void)dealloc;
@end

