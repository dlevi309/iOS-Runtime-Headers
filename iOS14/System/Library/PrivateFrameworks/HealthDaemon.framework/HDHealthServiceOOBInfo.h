/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSData;

@interface HDHealthServiceOOBInfo : NSObject {

	NSData* _oobData;
	NSData* _randomValue;
	NSData* _confirmationValue;
	NSData* _btAddress;

}

@property (nonatomic,readonly) NSData * oobData;                        //@synthesize oobData=_oobData - In the implementation block
@property (nonatomic,readonly) NSData * randomValue;                    //@synthesize randomValue=_randomValue - In the implementation block
@property (nonatomic,readonly) NSData * confirmationValue;              //@synthesize confirmationValue=_confirmationValue - In the implementation block
@property (nonatomic,readonly) NSData * btAddress;                      //@synthesize btAddress=_btAddress - In the implementation block
+(id)reverseData:(id)arg1 ;
-(NSData *)confirmationValue;
-(id)description;
-(NSData *)oobData;
-(NSData *)btAddress;
-(NSData *)randomValue;
-(id)initWithOOBData:(id)arg1 btAddress:(id)arg2 ;
@end

