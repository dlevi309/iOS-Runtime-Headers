/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableSet, NSSet, NSString;

@interface RBSystemState : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding> {

	NSMutableSet* _tags;
	BOOL _preventLaunch;
	BOOL _preventIdleSleep;
	NSMutableSet* _preventIdleSleepIdentifiers;
	BOOL _throttleBestEffortNetworking;

}

@property (nonatomic,readonly) BOOL preventIdleSleep;                            //@synthesize preventIdleSleep=_preventIdleSleep - In the implementation block
@property (nonatomic,readonly) BOOL preventLaunch;                               //@synthesize preventLaunch=_preventLaunch - In the implementation block
@property (nonatomic,readonly) NSSet * preventIdleSleepIdentifiers;              //@synthesize preventIdleSleepIdentifiers=_preventIdleSleepIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL throttleBestEffortNetworking;                //@synthesize throttleBestEffortNetworking=_throttleBestEffortNetworking - In the implementation block
@property (nonatomic,copy,readonly) NSSet * tags;                                //@synthesize tags=_tags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_init;
-(NSSet *)tags;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSSet *)preventIdleSleepIdentifiers;
-(BOOL)preventIdleSleep;
-(BOOL)throttleBestEffortNetworking;
-(BOOL)preventLaunch;
@end

