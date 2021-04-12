/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/NWConnection.h>

@interface NWStreamConnection : NWConnection
+(id)connectionWithConnectedSocket:(int)arg1 ;
-(BOOL)readDataWithMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)writeData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)writeCloseWithCompletionHandler:(/*^block*/id)arg1 ;
@end

