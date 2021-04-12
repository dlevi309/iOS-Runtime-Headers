/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HMFUnfairLock *)accessoryPairingRetryMapLock;
-(NSMutableDictionary *)retryCountMap;
-(unsigned long long)retryCountForIdentifier:(id)arg1 ;
-(void)clearRetryCountMap;
-(void)incrementRetryCount:(id)arg1 ;
@end

