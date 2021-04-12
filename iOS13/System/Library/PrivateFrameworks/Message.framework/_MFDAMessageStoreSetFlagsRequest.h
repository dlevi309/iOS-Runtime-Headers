/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <DataAccess/DAMailboxSetFlagsRequest.h>
#import <libobjc.A.dylib/MFDAMailAccountRequest.h>

@interface _MFDAMessageStoreSetFlagsRequest : DAMailboxSetFlagsRequest <MFDAMailAccountRequest>

@property (nonatomic,readonly) BOOL shouldSend; 
@property (nonatomic,readonly) BOOL isUserRequested; 
-(BOOL)isUserRequested;
-(BOOL)shouldSend;
-(unsigned long long)generationNumber;
@end

