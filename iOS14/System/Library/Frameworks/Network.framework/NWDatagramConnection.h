/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/NWConnection.h>

@interface NWDatagramConnection : NWConnection
+(id)connectionWithConnectedSocket:(int)arg1 ;
-(BOOL)readDatagramsWithMinimumCount:(unsigned long long)arg1 maximumCount:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)writeDatagrams:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

