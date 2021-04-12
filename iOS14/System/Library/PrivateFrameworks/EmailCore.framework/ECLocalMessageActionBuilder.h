/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

@class NSString, NSURL;


@protocol ECLocalMessageActionBuilder <NSObject>
@property (nonatomic,retain) NSString * messageActionPersistentID; 
@property (nonatomic,retain) NSURL * mailboxURL; 
@property (assign,nonatomic) BOOL userInitiated; 
@required
-(void)setUserInitiated:(BOOL)arg1;
-(NSURL *)mailboxURL;
-(BOOL)userInitiated;
-(NSString *)messageActionPersistentID;
-(void)setMessageActionPersistentID:(id)arg1;
-(void)setMailboxURL:(id)arg1;

@end

