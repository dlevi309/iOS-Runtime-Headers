/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class MFMailMessageLibrary, MFMailboxProvider, NSString;

@interface MFMessageTransformer : NSObject <EFLoggable> {

	MFMailMessageLibrary* _library;
	MFMailboxProvider* _mailboxProvider;

}

@property (nonatomic,retain) MFMailMessageLibrary * library;                   //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) MFMailboxProvider * mailboxProvider;              //@synthesize mailboxProvider=_mailboxProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(MFMailMessageLibrary *)library;
-(void)setLibrary:(MFMailMessageLibrary *)arg1 ;
-(MFMailboxProvider *)mailboxProvider;
-(id)transformLegacyMailMessage:(id)arg1 mailboxScope:(id)arg2 loaderBlock:(/*^block*/id)arg3 ;
-(id)initWithLibrary:(id)arg1 mailboxProvider:(id)arg2 ;
-(id)transformLegacyMailMessages:(id)arg1 mailboxScope:(id)arg2 ;
-(void)setMailboxProvider:(MFMailboxProvider *)arg1 ;
-(id)_transformLegacyMailMessage:(id)arg1 mailboxScope:(id)arg2 duplicateInfo:(id)arg3 loaderBlock:(/*^block*/id)arg4 ;
@end

