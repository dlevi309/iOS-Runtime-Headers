/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <DataAccess/DAMailboxGetUpdatesRequest.h>
#import <libobjc.A.dylib/MFDAMailAccountRequest.h>

@interface _MFDAMessageStoreGetUpdatesRequest : DAMailboxGetUpdatesRequest <MFDAMailAccountRequest> {

	BOOL _isUserRequested;

}

@property (nonatomic,readonly) BOOL shouldSend; 
@property (nonatomic,readonly) BOOL isUserRequested; 
-(BOOL)isUserRequested;
-(BOOL)shouldSend;
-(unsigned long long)generationNumber;
-(BOOL)mf_alwaysReportFailures;
-(id)initRequestForBodyFormat:(int)arg1 withBodySizeLimit:(int)arg2 isUserRequested:(BOOL)arg3 ;
-(id)deferredOperation;
@end

