/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/_MFOfflineCacheOperation.h>

@class NSString;

@interface MFDADeferredStoreDraftOperation : _MFOfflineCacheOperation {

	NSString* _messageIDHeader;
	NSString* _folderID;

}
+(BOOL)supportsSecureCoding;
+(id)log;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)translateToLocalActionWithConnection:(id)arg1 ;
-(id)initWithMessageIDHeader:(id)arg1 mailbox:(id)arg2 ;
@end

