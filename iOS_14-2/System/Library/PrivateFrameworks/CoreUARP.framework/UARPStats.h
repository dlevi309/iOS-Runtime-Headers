/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
*/


#import <CoreUARP/CoreUARP-Structs.h>
@interface UARPStats : NSObject {

	unsigned _packetsNoVersionAgreement;
	unsigned _packetsMissed;
	unsigned _packetsDuplicate;
	unsigned _packetsOutOfOrder;

}

@property (readonly) unsigned packetsNoVersionAgreement;              //@synthesize packetsNoVersionAgreement=_packetsNoVersionAgreement - In the implementation block
@property (readonly) unsigned packetsMissed;                          //@synthesize packetsMissed=_packetsMissed - In the implementation block
@property (readonly) unsigned packetsDuplicate;                       //@synthesize packetsDuplicate=_packetsDuplicate - In the implementation block
@property (readonly) unsigned packetsOutOfOrder;                      //@synthesize packetsOutOfOrder=_packetsOutOfOrder - In the implementation block
-(unsigned)packetsDuplicate;
-(unsigned)packetsOutOfOrder;
-(id)initWithStatistics:(UARPStatistics*)arg1 ;
-(unsigned)packetsNoVersionAgreement;
-(unsigned)packetsMissed;
@end

