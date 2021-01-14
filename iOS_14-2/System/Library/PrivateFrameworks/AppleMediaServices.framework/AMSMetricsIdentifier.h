/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class ACAccount, AMSProcessInfo, NSString;

@interface AMSMetricsIdentifier : NSObject {

	ACAccount* _account;
	AMSProcessInfo* _clientInfo;
	NSString* _domain;
	double _duration;

}

@property (nonatomic,retain) ACAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) NSString * domain;                        //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) double duration;                          //@synthesize duration=_duration - In the implementation block
+(id)_sharedQueue;
+(id)_database;
+(id)_accountIdentifierForAccount:(id)arg1 ;
+(void)cleanupIdentifiers;
+(void)removeIdentifiersForAccount:(id)arg1 ;
-(ACAccount *)account;
-(void)setDuration:(double)arg1 ;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)init;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(id)generateIdentifier;
-(id)_generateCacheKey;
-(id)generateEventFields;
-(NSString *)domain;
-(double)duration;
@end

