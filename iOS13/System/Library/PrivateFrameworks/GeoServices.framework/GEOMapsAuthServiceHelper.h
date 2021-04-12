/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEOMapsAuthServiceHelper : NSObject
+(id)sharedAuthHelper;
-(void)addProxyAuthHeaderOrReAuth:(id)arg1 authProxyURL:(id)arg2 ;
-(void)setConnectionProxyDictionary:(id)arg1 url:(id)arg2 proxyURL:(id)arg3 ;
-(id)dictionaryForAuthTokenState;
-(void)handleSecureProxyChallenge:(id)arg1 ;
-(id)_tokenTypeString:(unsigned long long)arg1 ;
-(void)sendProxyAuthNotification:(long long)arg1 ;
-(BOOL)_checkMRTResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 suppressNotification:(BOOL)arg4 ;
-(BOOL)_checkACTokenResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 suppressNotification:(BOOL)arg4 ;
-(long long)_statusCodeFromResponse:(id)arg1 ;
-(BOOL)_successReplacingTokensFromData:(id)arg1 ;
-(void)renewMapsAuthProxyToken:(unsigned long long)arg1 fromToken:(id)arg2 authProxyURL:(id)arg3 suppressNotification:(BOOL)arg4 ;
-(BOOL)_hasMAT;
-(BOOL)_hasMRT;
-(void)addMapsAuthDidFinishObserver:(id)arg1 ;
-(void)removeMapsAuthDidFinishObserver:(id)arg1 ;
-(void)doEnvironmentSwitchCheck:(id)arg1 authProxyURL:(id)arg2 suppressNotification:(BOOL)arg3 ;
@end

