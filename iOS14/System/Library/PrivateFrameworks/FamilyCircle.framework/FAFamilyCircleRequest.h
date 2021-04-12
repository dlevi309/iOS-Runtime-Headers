/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/


@protocol FAFamilyCircleRequestConnectionProvider;
@class NSString;

@interface FAFamilyCircleRequest : NSObject {

	NSString* _usernameOrDSID;
	NSString* _passwordOrToken;
	id<FAFamilyCircleRequestConnectionProvider> _connectionProvider;

}

@property (nonatomic,retain) id<FAFamilyCircleRequestConnectionProvider> connectionProvider;              //@synthesize connectionProvider=_connectionProvider - In the implementation block
@property (copy) NSString * usernameOrDSID;                                                               //@synthesize usernameOrDSID=_usernameOrDSID - In the implementation block
@property (copy) NSString * passwordOrToken;                                                              //@synthesize passwordOrToken=_passwordOrToken - In the implementation block
-(NSString *)usernameOrDSID;
-(id)synchronousRemoteObjectWithErrorHandler:(/*^block*/id)arg1 ;
-(NSString *)passwordOrToken;
-(void)setUsernameOrDSID:(NSString *)arg1 ;
-(void)setPasswordOrToken:(NSString *)arg1 ;
-(void)setConnectionProvider:(id<FAFamilyCircleRequestConnectionProvider>)arg1 ;
-(id)init;
-(id)requestOptions;
-(id)serviceConnection;
-(id)serviceRemoteObjectWithErrorHandler:(/*^block*/id)arg1 ;
-(id<FAFamilyCircleRequestConnectionProvider>)connectionProvider;
-(id)initWithConnectionProvider:(id)arg1 ;
@end

