/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)mf_alwaysReportFailures;
-(id)initRequestForBodyFormat:(int)arg1 withBodySizeLimit:(int)arg2 isUserRequested:(BOOL)arg3 ;
-(id)deferredOperation;
-(BOOL)shouldSend;
-(unsigned long long)generationNumber;
@end

