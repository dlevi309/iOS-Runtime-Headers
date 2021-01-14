/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
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

