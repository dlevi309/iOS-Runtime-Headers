/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableSet, NSSet;

@interface RBSystemState : NSObject <NSCopying, NSMutableCopying> {

	NSMutableSet* _tags;
	BOOL _preventLaunch;
	BOOL _preventIdleSleep;
	NSMutableSet* _preventIdleSleepIdentifiers;
	NSMutableSet* _preventLaunchPredicates;

}

@property (nonatomic,readonly) BOOL preventIdleSleep;                             //@synthesize preventIdleSleep=_preventIdleSleep - In the implementation block
@property (nonatomic,readonly) BOOL preventLaunch;                                //@synthesize preventLaunch=_preventLaunch - In the implementation block
@property (nonatomic,readonly) NSSet * preventIdleSleepIdentifiers;               //@synthesize preventIdleSleepIdentifiers=_preventIdleSleepIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSSet * tags;                                 //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy,readonly) NSSet * preventLaunchPredicates;              //@synthesize preventLaunchPredicates=_preventLaunchPredicates - In the implementation block
-(BOOL)preventIdleSleep;
-(NSSet *)preventLaunchPredicates;
-(NSSet *)preventIdleSleepIdentifiers;
-(NSSet *)tags;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)preventLaunch;
-(unsigned long long)hash;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

