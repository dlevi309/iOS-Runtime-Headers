/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class NSNumber;

@interface HMPresenceEventActivation : NSObject {

	unsigned long long _value;

}

@property (nonatomic,readonly) NSNumber * number; 
@property (nonatomic,readonly) unsigned long long value;              //@synthesize value=_value - In the implementation block
+(id)activationGranularityWithNumber:(id)arg1 ;
+(id)activationGranularityWithValue:(unsigned long long)arg1 ;
+(id)activationGranularityWithMessage:(id)arg1 ;
+(id)activationGranularityWithDict:(id)arg1 ;
+(id)activationGranularityWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)value;
-(NSNumber *)number;
-(id)initWithNumber:(id)arg1 ;
-(void)addToCoder:(id)arg1 ;
-(void)addToPayload:(id)arg1 ;
@end

