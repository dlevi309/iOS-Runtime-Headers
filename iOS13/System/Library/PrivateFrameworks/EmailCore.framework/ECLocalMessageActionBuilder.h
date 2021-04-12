/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

@class NSString, NSURL;


@protocol ECLocalMessageActionBuilder <NSObject>
@property (nonatomic,retain) NSString * messageActionPersistentID; 
@property (nonatomic,retain) NSURL * mailboxURL; 
@property (assign,nonatomic) BOOL userInitiated; 
@required
-(BOOL)userInitiated;
-(void)setUserInitiated:(BOOL)arg1;
-(NSURL *)mailboxURL;
-(NSString *)messageActionPersistentID;
-(void)setMessageActionPersistentID:(id)arg1;
-(void)setMailboxURL:(id)arg1;

@end

