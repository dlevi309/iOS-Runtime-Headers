/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class NSNumber;

@interface HMUserPresenceAuthorization : NSObject {

	unsigned long long _value;

}

@property (nonatomic,readonly) NSNumber * number; 
@property (nonatomic,readonly) unsigned long long value;              //@synthesize value=_value - In the implementation block
+(id)authWithMessage:(id)arg1 ;
+(id)authWithCoder:(id)arg1 ;
+(id)authWithNumber:(id)arg1 ;
+(id)authWithValue:(unsigned long long)arg1 ;
+(id)authWithDict:(id)arg1 ;
-(NSNumber *)number;
-(id)description;
-(id)initWithNumber:(id)arg1 ;
-(unsigned long long)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)addToCoder:(id)arg1 ;
-(void)addToPayload:(id)arg1 ;
@end

