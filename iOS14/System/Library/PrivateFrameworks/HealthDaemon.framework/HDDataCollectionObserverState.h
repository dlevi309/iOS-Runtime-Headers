/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(BOOL)hasRunningWorkout;
-(BOOL)isInBackground;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

