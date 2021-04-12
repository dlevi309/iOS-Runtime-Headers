/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSNumber;

@interface HMDUserPresenceUpdateReason : NSObject {

	unsigned long long _value;

}

@property (nonatomic,readonly) NSNumber * number; 
@property (nonatomic,readonly) unsigned long long value;              //@synthesize value=_value - In the implementation block
+(id)reasonWithDict:(id)arg1 ;
+(id)reasonWithValue:(unsigned long long)arg1 ;
+(id)reasonWithNumber:(id)arg1 ;
+(id)reasonWithMessage:(id)arg1 ;
+(id)reasonWithCoder:(id)arg1 ;
-(NSNumber *)number;
-(id)description;
-(id)initWithNumber:(id)arg1 ;
-(unsigned long long)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)addToCoder:(id)arg1 ;
-(void)addToPayload:(id)arg1 ;
@end

