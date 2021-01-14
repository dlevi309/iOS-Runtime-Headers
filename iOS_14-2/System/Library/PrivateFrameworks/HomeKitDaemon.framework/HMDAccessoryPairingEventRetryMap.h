/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSMutableDictionary, HMFUnfairLock;

@interface HMDAccessoryPairingEventRetryMap : NSObject {

	NSMutableDictionary* _retryCountMap;
	HMFUnfairLock* _accessoryPairingRetryMapLock;

}

@property (nonatomic,readonly) NSMutableDictionary * retryCountMap;                       //@synthesize retryCountMap=_retryCountMap - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * accessoryPairingRetryMapLock;              //@synthesize accessoryPairingRetryMapLock=_accessoryPairingRetryMapLock - In the implementation block
+(id)sharedInstance;
-(id)init;
-(unsigned long long)retryCountForIdentifier:(id)arg1 ;
-(HMFUnfairLock *)accessoryPairingRetryMapLock;
-(NSMutableDictionary *)retryCountMap;
-(void)clearRetryCountMap;
-(void)incrementRetryCount:(id)arg1 ;
@end

