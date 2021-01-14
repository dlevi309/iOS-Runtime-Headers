/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCThrottle.h>

@class NSPredicate;

@interface BRCSyncThrottle : BRCThrottle {

	NSPredicate* _predicate;

}

@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(BOOL)_validateThrottleParams:(id)arg1 ;
-(id)initWithName:(id)arg1 andParameters:(id)arg2 ;
-(BOOL)matchesItem:(id)arg1 nsecsToRetry:(unsigned long long*)arg2 now:(unsigned long long)arg3 ;
@end

