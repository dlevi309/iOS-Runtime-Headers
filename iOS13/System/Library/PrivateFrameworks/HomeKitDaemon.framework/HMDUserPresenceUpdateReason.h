/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)value;
-(NSNumber *)number;
-(id)initWithNumber:(id)arg1 ;
-(void)addToCoder:(id)arg1 ;
-(void)addToPayload:(id)arg1 ;
@end

