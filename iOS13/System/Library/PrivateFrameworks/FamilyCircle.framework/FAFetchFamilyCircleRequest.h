/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSArray, NSDictionary;

@interface FAFetchFamilyCircleRequest : FAFamilyCircleRequest {

	BOOL _signedInAccountShouldBeApprover;
	BOOL _forceServerFetch;
	BOOL _doNotFetchFromServer;
	BOOL _promptUserToResolveAuthenticatonFailure;
	NSArray* _expectedDSIDs;
	NSDictionary* _serverResponse;

}

@property (retain,readonly) NSDictionary * serverResponse;                    //@synthesize serverResponse=_serverResponse - In the implementation block
@property (copy) NSArray * expectedDSIDs;                                     //@synthesize expectedDSIDs=_expectedDSIDs - In the implementation block
@property (assign) BOOL signedInAccountShouldBeApprover;                      //@synthesize signedInAccountShouldBeApprover=_signedInAccountShouldBeApprover - In the implementation block
@property (assign) BOOL forceServerFetch;                                     //@synthesize forceServerFetch=_forceServerFetch - In the implementation block
@property (assign) BOOL doNotFetchFromServer;                                 //@synthesize doNotFetchFromServer=_doNotFetchFromServer - In the implementation block
@property (assign) BOOL promptUserToResolveAuthenticatonFailure;              //@synthesize promptUserToResolveAuthenticatonFailure=_promptUserToResolveAuthenticatonFailure - In the implementation block
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setForceServerFetch:(BOOL)arg1 ;
-(id)requestOptions;
-(void)setPromptUserToResolveAuthenticatonFailure:(BOOL)arg1 ;
-(NSDictionary *)serverResponse;
-(void)setDoNotFetchFromServer:(BOOL)arg1 ;
-(NSArray *)expectedDSIDs;
-(BOOL)signedInAccountShouldBeApprover;
-(BOOL)forceServerFetch;
-(BOOL)doNotFetchFromServer;
-(BOOL)promptUserToResolveAuthenticatonFailure;
-(void)setExpectedDSIDs:(NSArray *)arg1 ;
-(void)setSignedInAccountShouldBeApprover:(BOOL)arg1 ;
@end

