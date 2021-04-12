/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@class NSDictionary, NSMutableDictionary;

@interface ACDKeychainCache : NSObject {

	os_unfair_lock_s _cachesLock;
	os_unfair_lock_s _expirersLock;
	unsigned _cacheValidityDuration;
	NSDictionary* _cachesByUsername;
	NSMutableDictionary* _expirersByUsername;

}

@property (assign) unsigned cacheValidityDuration;                        //@synthesize cacheValidityDuration=_cacheValidityDuration - In the implementation block
@property (retain) NSDictionary * cachesByUsername;                       //@synthesize cachesByUsername=_cachesByUsername - In the implementation block
@property (retain) NSMutableDictionary * expirersByUsername;              //@synthesize expirersByUsername=_expirersByUsername - In the implementation block
-(void)clearCache;
-(NSDictionary *)cachesByUsername;
-(void)setCachesByUsername:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)expirersByUsername;
-(unsigned)cacheValidityDuration;
-(id)initWithValidityDuration:(unsigned)arg1 ;
-(void)cacheData:(id)arg1 forService:(id)arg2 username:(id)arg3 ;
-(id)dataForService:(id)arg1 username:(id)arg2 ;
-(void)clearDataForService:(id)arg1 username:(id)arg2 ;
-(void)setCacheValidityDuration:(unsigned)arg1 ;
-(void)setExpirersByUsername:(NSMutableDictionary *)arg1 ;
@end

