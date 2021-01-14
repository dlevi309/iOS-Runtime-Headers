/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)main;
-(NSString *)reason;
-(HMDHomeManager *)homeManager;
-(BOOL)incrementGeneration;
-(id)initWithHomeManager:(id)arg1 reason:(id)arg2 incrementGeneration:(BOOL)arg3 ;
@end

