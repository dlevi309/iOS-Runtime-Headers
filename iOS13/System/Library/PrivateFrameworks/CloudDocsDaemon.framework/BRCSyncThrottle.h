/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCThrottle.h>

@class NSPredicate;

@interface BRCSyncThrottle : BRCThrottle {

	NSPredicate* _predicate;

}

@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(BOOL)_validateThrottleParams:(id)arg1 ;
-(id)initWithName:(id)arg1 andParameters:(id)arg2 ;
-(BOOL)matchesItem:(id)arg1 nsecsToRetry:(unsigned long long*)arg2 now:(unsigned long long)arg3 ;
@end

