/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSMutableArray;

@interface _MFMailboxUidChildrenEnumerator : NSEnumerator {

	NSMutableArray* _mailboxes;
	unsigned long long _index;
	BOOL _includeHidden;

}
-(id)nextObject;
-(id)_initWithMailbox:(id)arg1 includeHiddenChildren:(BOOL)arg2 ;
@end

