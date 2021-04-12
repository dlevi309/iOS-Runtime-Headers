/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
*/


@class NSArray, IMAPAccount;

@interface _MFIMAPMailboxDeletionQueueEntry : NSObject {

	NSArray* urls;
	NSArray* paths;
	IMAPAccount* account;

}

@property (copy) NSArray * urls; 
@property (copy) NSArray * paths; 
@property (retain) IMAPAccount * account; 
-(NSArray *)urls;
-(IMAPAccount *)account;
-(NSArray *)paths;
-(void)setPaths:(NSArray *)arg1 ;
-(void)setAccount:(IMAPAccount *)arg1 ;
-(void)setUrls:(NSArray *)arg1 ;
@end

