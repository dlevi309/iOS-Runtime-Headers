/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFMailboxUid.h>

@class NSString;

@interface MFDAMailbox : MFMailboxUid {

	NSString* _folderID;

}

@property (copy) NSString * folderID; 
-(id)dictionaryRepresentation;
-(id)displayName;
-(NSString *)folderID;
-(void)setFolderID:(NSString *)arg1 ;
-(id)_folderID;
-(id)_privacySafeDescription;
-(id)initWithName:(id)arg1 attributes:(unsigned)arg2 account:(id)arg3 folderID:(id)arg4 ;
-(BOOL)mergeWithUserInfo:(id)arg1 ;
-(id)URLWithAccount:(id)arg1 ;
@end

