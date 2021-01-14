/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
*/


#import <CoreUARP/CoreUARP-Structs.h>
@interface UARPPacketDumper : NSObject {

	pcapRef _pcap;
	pcap_dumperRef _dumper;
	unsigned _bloodhoundPacketType;

}
-(id)initWithFileName:(id)arg1 ;
-(void)dealloc;
-(void)dump:(id)arg1 accessoryID:(id)arg2 uarpStatus:(unsigned)arg3 direction:(unsigned long long)arg4 ;
@end

