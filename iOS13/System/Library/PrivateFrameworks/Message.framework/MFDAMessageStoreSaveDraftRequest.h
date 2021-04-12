/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <DataAccess/DADraftMessageRequest.h>
#import <libobjc.A.dylib/MFDAMailAccountRequest.h>

@class NSString;

@interface MFDAMessageStoreSaveDraftRequest : DADraftMessageRequest <MFDAMailAccountRequest> {

	NSString* _messageIDHeader;
	NSString* _folderID;

}

@property (nonatomic,readonly) BOOL shouldSend; 
@property (nonatomic,readonly) BOOL isUserRequested; 
-(BOOL)isUserRequested;
-(BOOL)shouldSend;
-(unsigned long long)generationNumber;
-(id)initWithMessage:(id)arg1 mailbox:(id)arg2 ;
@end

