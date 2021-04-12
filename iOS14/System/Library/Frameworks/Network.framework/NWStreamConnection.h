/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/NWConnection.h>

@interface NWStreamConnection : NWConnection
+(id)connectionWithConnectedSocket:(int)arg1 ;
-(BOOL)readDataWithMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)writeData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)writeCloseWithCompletionHandler:(/*^block*/id)arg1 ;
@end

