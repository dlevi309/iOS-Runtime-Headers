/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateInterval, NSArray, NSDictionary, NSString;

@interface HDSPSleepSession : NSObject <BSDescriptionProviding, NSSecureCoding> {

	BOOL _requiresFirstUnlock;
	NSDateInterval* _interval;
	NSArray* _sleepIntervals;
	unsigned long long _endReason;
	NSDictionary* _metadata;

}

@property (nonatomic,readonly) NSDateInterval * interval;                 //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) NSArray * sleepIntervals;                  //@synthesize sleepIntervals=_sleepIntervals - In the implementation block
@property (nonatomic,readonly) unsigned long long endReason;              //@synthesize endReason=_endReason - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata;                   //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BOOL requiresFirstUnlock;                  //@synthesize requiresFirstUnlock=_requiresFirstUnlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)sleepSessionWithDateInterval:(id)arg1 sleepIntervals:(id)arg2 endReason:(unsigned long long)arg3 metadata:(id)arg4 requiresFirstUnlock:(BOOL)arg5 ;
+(id)testSleepSession;
-(unsigned long long)endReason;
-(id)succinctDescription;
-(NSDateInterval *)interval;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSDictionary *)metadata;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)requiresFirstUnlock;
-(NSArray *)sleepIntervals;
-(id)initWithDateInterval:(id)arg1 sleepIntervals:(id)arg2 endReason:(unsigned long long)arg3 metadata:(id)arg4 requiresFirstUnlock:(BOOL)arg5 ;
@end

