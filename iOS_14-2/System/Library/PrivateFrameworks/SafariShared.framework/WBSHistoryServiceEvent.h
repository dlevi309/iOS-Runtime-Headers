/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSDictionary;

@interface WBSHistoryServiceEvent : NSObject <NSSecureCoding> {

	long long _eventID;
	NSString* _eventType;
	NSDate* _time;
	NSDictionary* _value;

}

@property (nonatomic,readonly) long long eventID;                      //@synthesize eventID=_eventID - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy,readonly) NSDate * time;                     //@synthesize time=_time - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)eventID;
-(NSDate *)time;
-(NSString *)eventType;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)value;
-(id)initWithType:(id)arg1 time:(id)arg2 value:(id)arg3 ;
-(id)initWithEventID:(long long)arg1 type:(id)arg2 time:(id)arg3 value:(id)arg4 ;
@end

