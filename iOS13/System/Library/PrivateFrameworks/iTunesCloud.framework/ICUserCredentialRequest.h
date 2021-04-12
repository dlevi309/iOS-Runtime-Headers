/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICUserIdentity, ICUserIdentityStore, ICClientInfo;

@interface ICUserCredentialRequest : NSObject <NSCopying> {

	ICUserIdentity* _identity;
	ICUserIdentityStore* _identityStore;
	ICClientInfo* _clientInfo;
	long long _qualityOfService;
	double _timeoutInterval;

}

@property (nonatomic,copy,readonly) ICUserIdentity * identity;                   //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) ICUserIdentityStore * identityStore;              //@synthesize identityStore=_identityStore - In the implementation block
@property (nonatomic,copy,readonly) ICClientInfo * clientInfo;                   //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                         //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                             //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(ICUserIdentity *)identity;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
-(ICClientInfo *)clientInfo;
-(ICUserIdentityStore *)identityStore;
-(id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3 ;
@end

