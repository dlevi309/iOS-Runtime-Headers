/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailDaemon/EDLocalActionPersistence.h>

@class MFMailMessageLibrary;

@interface MFLocalActionPersistence_iOS : EDLocalActionPersistence {

	MFMailMessageLibrary* _library;

}

@property (assign,nonatomic,__weak) MFMailMessageLibrary * library;              //@synthesize library=_library - In the implementation block
-(MFMailMessageLibrary *)library;
-(id)initWithDatabase:(id)arg1 ;
-(void)setLibrary:(MFMailMessageLibrary *)arg1 ;
-(BOOL)moveSupportedFromMailboxURL:(id)arg1 toURL:(id)arg2 ;
-(id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2 ;
-(id)initWithLibrary:(id)arg1 database:(id)arg2 ;
-(id)messageForDatabaseID:(long long)arg1 ;
-(id)mailboxURLForDatabaseID:(long long)arg1 ;
-(long long)mailboxDatabaseIDForURL:(id)arg1 ;
-(id)labelNameForLabelID:(long long)arg1 ;
-(void)handledFailedCopyForMessages:(id)arg1 ;
@end

