/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailDaemon/EDServerMessagePersistenceFactory.h>

@class MFMailMessageLibrary;

@interface MFServerMessagePersistenceFactory_iOS : EDServerMessagePersistenceFactory {

	MFMailMessageLibrary* _library;

}

@property (assign,nonatomic,__weak) MFMailMessageLibrary * library;              //@synthesize library=_library - In the implementation block
-(MFMailMessageLibrary *)library;
-(void)setLibrary:(MFMailMessageLibrary *)arg1 ;
-(id)initWithLibrary:(id)arg1 database:(id)arg2 ;
-(long long)mailboxIDForMailboxURL:(id)arg1 useNumericSearch:(BOOL*)arg2 supportsLabels:(BOOL*)arg3 ;
@end

