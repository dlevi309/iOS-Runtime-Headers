/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOConfigChangeListenerDelegate.h>

@class NSString;

@interface GEOMapsAuthServiceHelper : NSObject <GEOConfigChangeListenerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAuthHelper;
-(void)sendProxyAuthNotification:(long long)arg1 ;
-(void)valueChangedForGEOConfigKey:(SCD_Struct_GE191*)arg1 ;
-(id)init;
-(void)addMapsAuthDidFinishObserver:(id)arg1 ;
-(void)doEnvironmentSwitchCheck:(id)arg1 authProxyURL:(id)arg2 suppressNotification:(BOOL)arg3 ;
-(void)removeMapsAuthDidFinishObserver:(id)arg1 ;
-(BOOL)_checkACTokenResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 suppressNotification:(BOOL)arg4 ;
-(long long)_statusCodeFromResponse:(id)arg1 ;
-(void)renewMapsAuthProxyToken:(unsigned long long)arg1 fromToken:(id)arg2 authProxyURL:(id)arg3 suppressNotification:(BOOL)arg4 ;
-(void)setConnectionProxyDictionary:(id)arg1 url:(id)arg2 proxyURL:(id)arg3 ;
-(void)updateAuthenticatedFeatureFlagStatesWithDict:(id)arg1 ;
-(BOOL)_checkMRTResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 suppressNotification:(BOOL)arg4 ;
-(id)_tokenTypeString:(unsigned long long)arg1 ;
-(id)dictionaryForAuthTokenState;
-(BOOL)_hasMRT;
-(BOOL)_hasMAT;
-(void)_handleFeatureFlagResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)handleSecureProxyChallenge:(id)arg1 ;
-(BOOL)_successReplacingTokensFromMRTResponseData:(id)arg1 ;
-(void)addProxyAuthHeaderOrReAuth:(id)arg1 authProxyURL:(id)arg2 ;
-(void)requestFeatureFlagsWithURL:(id)arg1 suppressNotification:(BOOL)arg2 ;
@end

