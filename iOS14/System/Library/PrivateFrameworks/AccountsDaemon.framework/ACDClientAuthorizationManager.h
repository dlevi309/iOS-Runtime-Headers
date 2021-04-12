/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@class ACDDatabaseConnection;

@interface ACDClientAuthorizationManager : NSObject {

	ACDDatabaseConnection* _databaseConnection;

}
-(id)allAuthorizationsForAccountTypeWithIdentifier:(id)arg1 ;
-(id)authorizationForClient:(id)arg1 accountType:(id)arg2 ;
-(id)initWithDatabaseConnection:(id)arg1 ;
-(id)_csvStringFromSet:(id)arg1 ;
-(id)authorizationForClient:(id)arg1 accountTypeWithIdentifier:(id)arg2 ;
-(id)setAuthorization:(id)arg1 forClient:(id)arg2 onAccountType:(id)arg3 ;
-(id)_setFromCSVString:(id)arg1 ;
-(id)removeAuthorizationForClient:(id)arg1 accountType:(id)arg2 ;
-(id)allAuthorizationsForAccountType:(id)arg1 ;
-(id)removeAllClientAuthorizationsForAccountType:(id)arg1 ;
-(id)removeAllClientAuthorizationsForAccountTypeWithIdentifier:(id)arg1 ;
-(id)removeAuthorizationForClient:(id)arg1 accountTypeWithIdentifier:(id)arg2 ;
@end

