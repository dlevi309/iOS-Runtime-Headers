/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFRequestQueue.h>

@class DAMailAccount, NSString;

@interface MFDARequestQueue : MFRequestQueue {

	DAMailAccount* _account;
	NSString* _folderID;

}
-(id)initWithAccount:(id)arg1 folderID:(id)arg2 ;
-(id)filterRequests:(id)arg1 ;
-(BOOL)processRequests:(id)arg1 ;
@end

