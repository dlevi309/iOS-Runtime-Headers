/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailDaemon/EDServerMessagePersistenceFactory.h>

@class MFMailMessageLibrary;

@interface MFServerMessagePersistenceFactory_iOS : EDServerMessagePersistenceFactory {

	MFMailMessageLibrary* _library;

}

@property (assign,nonatomic,__weak) MFMailMessageLibrary * library;              //@synthesize library=_library - In the implementation block
-(MFMailMessageLibrary *)library;
-(long long)mailboxIDForMailboxURL:(id)arg1 useNumericSearch:(BOOL*)arg2 supportsLabels:(BOOL*)arg3 ;
-(void)setLibrary:(MFMailMessageLibrary *)arg1 ;
-(id)initWithLibrary:(id)arg1 database:(id)arg2 ;
@end

