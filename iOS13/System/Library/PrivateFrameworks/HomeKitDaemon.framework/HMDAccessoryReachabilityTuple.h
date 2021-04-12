/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)accessoryUUID;
-(void)setAccessoryUUID:(NSString *)arg1 ;
-(void)setPreviouslySentReachability:(BOOL)arg1 ;
-(void)setCurrentReachability:(BOOL)arg1 ;
-(BOOL)previouslySentReachability;
-(BOOL)currentReachability;
@end

