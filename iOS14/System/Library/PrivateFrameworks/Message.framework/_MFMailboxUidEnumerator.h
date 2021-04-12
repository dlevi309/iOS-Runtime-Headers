/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSMutableArray;

@interface _MFMailboxUidEnumerator : NSEnumerator {

	NSMutableArray* _mailboxes;
	unsigned long long _index;

}
-(id)nextObject;
-(id)initWithMailbox:(id)arg1 ;
@end

