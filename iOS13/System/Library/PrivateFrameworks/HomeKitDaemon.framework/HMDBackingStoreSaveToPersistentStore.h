/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <Foundation/NSOperation.h>

@class HMDHomeManager, NSString;

@interface HMDBackingStoreSaveToPersistentStore : NSOperation {

	BOOL _incrementGeneration;
	HMDHomeManager* _homeManager;
	NSString* _reason;

}

@property (nonatomic,readonly) HMDHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,readonly) NSString * reason;                         //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) BOOL incrementGeneration;                  //@synthesize incrementGeneration=_incrementGeneration - In the implementation block
-(NSString *)reason;
-(void)main;
-(HMDHomeManager *)homeManager;
-(BOOL)incrementGeneration;
-(id)initWithHomeManager:(id)arg1 reason:(id)arg2 incrementGeneration:(BOOL)arg3 ;
@end

