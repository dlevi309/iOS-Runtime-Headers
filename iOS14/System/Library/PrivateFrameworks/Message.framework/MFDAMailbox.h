/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFMailboxUid.h>

@class NSString;

@interface MFDAMailbox : MFMailboxUid {

	NSString* _folderID;

}

@property (copy) NSString * folderID; 
-(id)dictionaryRepresentation;
-(id)_folderID;
-(void)setFolderID:(NSString *)arg1 ;
-(NSString *)folderID;
-(id)_privacySafeDescription;
-(id)initWithName:(id)arg1 attributes:(unsigned)arg2 account:(id)arg3 folderID:(id)arg4 ;
-(BOOL)mergeWithUserInfo:(id)arg1 ;
-(id)URLWithAccount:(id)arg1 ;
-(id)displayName;
@end

