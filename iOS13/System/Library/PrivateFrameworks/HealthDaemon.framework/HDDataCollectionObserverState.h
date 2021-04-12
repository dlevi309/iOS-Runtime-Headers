/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDDataCollectionObserverState : NSObject <NSCopying> {

	BOOL _isInBackground;
	BOOL _hasRunningWorkout;

}

@property (nonatomic,readonly) BOOL isInBackground;                 //@synthesize isInBackground=_isInBackground - In the implementation block
@property (nonatomic,readonly) BOOL hasRunningWorkout;              //@synthesize hasRunningWorkout=_hasRunningWorkout - In the implementation block
+(id)dataCollectionObserverStateInBackground:(BOOL)arg1 hasRunningWorkout:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isInBackground;
-(BOOL)hasRunningWorkout;
@end

