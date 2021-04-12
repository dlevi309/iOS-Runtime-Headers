/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSArray* _expectedAltDSIDs;
	unsigned long long _cachePolicy;
	NSDictionary* _serverResponse;
	long long _qualityOfService;

}

@property (retain,readonly) NSDictionary * serverResponse;                    //@synthesize serverResponse=_serverResponse - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                      //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (copy) NSArray * expectedDSIDs;                                     //@synthesize expectedDSIDs=_expectedDSIDs - In the implementation block
@property (copy) NSArray * expectedAltDSIDs;                                  //@synthesize expectedAltDSIDs=_expectedAltDSIDs - In the implementation block
@property (assign) BOOL signedInAccountShouldBeApprover;                      //@synthesize signedInAccountShouldBeApprover=_signedInAccountShouldBeApprover - In the implementation block
@property (assign) BOOL forceServerFetch;                                     //@synthesize forceServerFetch=_forceServerFetch - In the implementation block
@property (assign) unsigned long long cachePolicy;                            //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (assign) BOOL doNotFetchFromServer;                                 //@synthesize doNotFetchFromServer=_doNotFetchFromServer - In the implementation block
@property (assign) BOOL promptUserToResolveAuthenticatonFailure;              //@synthesize promptUserToResolveAuthenticatonFailure=_promptUserToResolveAuthenticatonFailure - In the implementation block
-(void)setQualityOfService:(long long)arg1 ;
-(void)setForceServerFetch:(BOOL)arg1 ;
-(id)init;
-(BOOL)signedInAccountShouldBeApprover;
-(NSArray *)expectedDSIDs;
-(NSDictionary *)serverResponse;
-(unsigned long long)_cachePolicy;
-(BOOL)doNotFetchFromServer;
-(id)fetchFamilyCircleWithError:(id*)arg1 ;
-(BOOL)promptUserToResolveAuthenticatonFailure;
-(void)setDoNotFetchFromServer:(BOOL)arg1 ;
-(void)setSignedInAccountShouldBeApprover:(BOOL)arg1 ;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)cachePolicy;
-(BOOL)forceServerFetch;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(void)setExpectedAltDSIDs:(NSArray *)arg1 ;
-(NSArray *)expectedAltDSIDs;
-(id)requestOptions;
-(void)setExpectedDSIDs:(NSArray *)arg1 ;
-(void)setPromptUserToResolveAuthenticatonFailure:(BOOL)arg1 ;
-(long long)qualityOfService;
@end

