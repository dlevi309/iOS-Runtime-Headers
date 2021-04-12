/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/MFMessageIterationFilter.h>

@class EFMutableInt64Set, NSString;

@interface MFMailboxMessageIterationFilter : NSObject <MFMessageIterationFilter> {

	EFMutableInt64Set* _mailboxes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)filterMessageWithStatement:(sqlite3_stmtRef)arg1 ;
-(BOOL)filterMessageWithRow:(id)arg1 ;
-(id)initWithMailboxes:(id)arg1 ;
@end

