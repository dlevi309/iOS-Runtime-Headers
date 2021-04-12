/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSData *)btAddress;
-(NSData *)oobData;
-(NSData *)randomValue;
-(NSData *)confirmationValue;
-(id)initWithOOBData:(id)arg1 btAddress:(id)arg2 ;
@end

