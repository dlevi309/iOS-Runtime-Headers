/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class ICSQLiteConnection, NSDate;

@interface ICDelegateAccountStoreReader : NSObject {

	ICSQLiteConnection* _connection;
	BOOL _isValid;

}

@property (nonatomic,copy,readonly) NSDate * lastExpirationPruningDate; 
@property (nonatomic,readonly) long long overestimatedNumberOfTokens; 
-(id)_tokenWithSQLiteRow:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)_enumerateQueryResults:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_userIdentityWithSQLiteRow:(id)arg1 ;
-(void)enumerateDelegationUUIDsForUserIdentity:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateTokensWithType:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)identityPropertiesForUserIdentity:(id)arg1 ;
-(long long)overestimatedNumberOfTokens;
-(id)tokenForUserIdentity:(id)arg1 ;
-(NSDate *)lastExpirationPruningDate;
-(void)invalidate;
-(void)enumerateTokensUsingBlock:(/*^block*/id)arg1 ;
@end

