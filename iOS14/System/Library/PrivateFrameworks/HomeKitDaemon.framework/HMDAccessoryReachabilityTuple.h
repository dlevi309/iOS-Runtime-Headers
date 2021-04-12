/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDAccessoryReachabilityTuple : HMFObject {

	BOOL _previouslySentReachability;
	BOOL _currentReachability;
	NSString* _accessoryUUID;

}

@property (nonatomic,retain) NSString * accessoryUUID;                     //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (assign,nonatomic) BOOL previouslySentReachability;              //@synthesize previouslySentReachability=_previouslySentReachability - In the implementation block
@property (assign,nonatomic) BOOL currentReachability;                     //@synthesize currentReachability=_currentReachability - In the implementation block
+(id)tupleWithAccessoryUUID:(id)arg1 reachable:(BOOL)arg2 ;
-(NSString *)accessoryUUID;
-(id)description;
-(unsigned long long)hash;
-(BOOL)currentReachability;
-(void)setCurrentReachability:(BOOL)arg1 ;
-(void)setAccessoryUUID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPreviouslySentReachability:(BOOL)arg1 ;
-(BOOL)previouslySentReachability;
@end

