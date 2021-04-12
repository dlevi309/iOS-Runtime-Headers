/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFOutgoingMessageContent.h>

@class MFLibraryMessage;

@interface MFOutgoingLibraryMessageContent : MFOutgoingMessageContent {

	MFLibraryMessage* _libraryMessage;

}

@property (nonatomic,retain) MFLibraryMessage * libraryMessage;              //@synthesize libraryMessage=_libraryMessage - In the implementation block
-(id)copy;
-(id)headers;
-(MFLibraryMessage *)libraryMessage;
-(id)libraryContent;
-(void)setLibraryMessage:(MFLibraryMessage *)arg1 ;
@end

