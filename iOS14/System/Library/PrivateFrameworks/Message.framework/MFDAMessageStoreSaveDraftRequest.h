/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithMessage:(id)arg1 mailbox:(id)arg2 ;
-(BOOL)shouldSend;
-(unsigned long long)generationNumber;
@end

