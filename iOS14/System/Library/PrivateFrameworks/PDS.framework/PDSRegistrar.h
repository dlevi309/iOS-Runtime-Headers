/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDS.framework/PDS
*/


@protocol PDSRemoteVendor;
@class NSString;

@interface PDSRegistrar : NSObject {

	NSString* _clientID;
	id<PDSRemoteVendor> _remoteVendor;

}

@property (nonatomic,retain) NSString * clientID;                           //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain) id<PDSRemoteVendor> remoteVendor;              //@synthesize remoteVendor=_remoteVendor - In the implementation block
-(NSString *)clientID;
-(void)setClientID:(NSString *)arg1 ;
-(id)description;
-(id)initWithClientID:(id)arg1 error:(id*)arg2 ;
-(id)currentRegistrationsForUser:(id)arg1 error:(id*)arg2 ;
-(BOOL)ensureRegistrationPresent:(id)arg1 forUser:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeRegistration:(id)arg1 fromUser:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeAllRegistrationsFromUser:(id)arg1 error:(id*)arg2 ;
-(id)activeUsersWithError:(id*)arg1 ;
-(id)_wrappedErrorForGivenError:(id)arg1 XPCError:(id)arg2 ;
-(id)_activeRegistrationsFromEntries:(id)arg1 ;
-(id)_wrappedErrorForFailedRemote:(id)arg1 ;
-(id)_registrationsFromEntries:(id)arg1 ;
-(id)allEntriesWithError:(id*)arg1 ;
-(void)allEntriesWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)addRegistration:(id)arg1 toUser:(id)arg2 error:(id*)arg3 ;
-(BOOL)batchUpdateRegistrations:(id)arg1 forUser:(id)arg2 error:(id*)arg3 ;
-(void)currentRegistrationsForUser:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)activeUsersWithCompletion:(/*^block*/id)arg1 ;
-(id)usersWithError:(id*)arg1 ;
-(void)usersWithCompletion:(/*^block*/id)arg1 ;
-(id)allRegistrationsForUser:(id)arg1 error:(id*)arg2 ;
-(void)allRegistrationsForUser:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)allRegistrationsWithError:(id*)arg1 ;
-(void)allRegistrationsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)deleteRegistration:(id)arg1 fromUser:(id)arg2 error:(id*)arg3 ;
-(id<PDSRemoteVendor>)remoteVendor;
-(void)setRemoteVendor:(id<PDSRemoteVendor>)arg1 ;
@end

