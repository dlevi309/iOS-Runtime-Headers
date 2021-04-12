/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/


#import <BackBoardServices/BackBoardServices-Structs.h>
@class BKSHIDEventAuthenticationKeyRetentionPolicy, BKSHIDEventAuthenticationKey, NSArray;

@interface BKSHIDEventAuthenticationKeyRing : NSObject {

	os_unfair_lock_s _lock;
	BKSHIDEventAuthenticationKeyRetentionPolicy* _retentionPolicy;
	BKSHIDEventAuthenticationKey* _authenticationKey;
	double _authenticationKeyTimeout;
	BKSHIDEventAuthenticationKey* _previousAuthenticationKey;
	double _previousAuthenticationKeyTimeout;

}

@property (nonatomic,readonly) BKSHIDEventAuthenticationKey * authenticationKey; 
@property (nonatomic,readonly) NSArray * allAuthenticationKeys; 
+(id)new;
+(id)keyRingWithRetentionPolicy:(id)arg1 ;
-(void)_timePasses:(double)arg1 ;
-(BKSHIDEventAuthenticationKey *)authenticationKey;
-(NSArray *)allAuthenticationKeys;
-(id)init;
@end

