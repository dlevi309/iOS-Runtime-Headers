/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/_MFOfflineCacheOperation.h>

@class NSArray, NSString;

@interface MFDADeferredMessageMoveOperation : _MFOfflineCacheOperation {

	NSArray* _sourceRemoteIDs;
	NSArray* _originalFlags;
	NSArray* _temporaryRemoteIDs;
	NSString* _sourceMailboxID;
	NSString* _destinationMailboxID;

}
+(BOOL)supportsSecureCoding;
+(id)log;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)translateToLocalActionWithConnection:(id)arg1 ;
@end

