/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/_MFOfflineCacheOperation.h>

@class NSString;

@interface _MFDADeferredModifyMailboxOperation : _MFOfflineCacheOperation {

	NSString* _folderID;
	NSString* _newParentFolderID;
	NSString* _newDisplayName;

}
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)translateToLocalActionWithConnection:(id)arg1 ;
-(id)initWithFolderID:(id)arg1 newParentFolderID:(id)arg2 newDisplayName:(id)arg3 ;
@end

