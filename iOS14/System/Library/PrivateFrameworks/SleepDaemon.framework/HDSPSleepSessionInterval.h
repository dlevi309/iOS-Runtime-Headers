/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateInterval, NSString;

@interface HDSPSleepSessionInterval : NSObject <BSDescriptionProviding, NSSecureCoding> {

	NSDateInterval* _interval;
	unsigned long long _type;

}

@property (nonatomic,readonly) NSDateInterval * interval;              //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)sleepSessionIntervalWithInterval:(id)arg1 type:(unsigned long long)arg2 ;
-(id)succinctDescription;
-(NSDateInterval *)interval;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithInterval:(id)arg1 type:(unsigned long long)arg2 ;
@end

