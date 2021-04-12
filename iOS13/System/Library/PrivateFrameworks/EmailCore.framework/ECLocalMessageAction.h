/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <libobjc.A.dylib/ECLocalMessageActionBuilder.h>

@class NSString, NSURL;

@interface ECLocalMessageAction : NSObject <ECLocalMessageActionBuilder> {

	BOOL _userInitiated;
	NSString* _messageActionPersistentID;
	NSURL* _mailboxURL;

}

@property (nonatomic,retain) NSString * messageActionPersistentID;              //@synthesize messageActionPersistentID=_messageActionPersistentID - In the implementation block
@property (nonatomic,retain) NSURL * mailboxURL;                                //@synthesize mailboxURL=_mailboxURL - In the implementation block
@property (assign,nonatomic) BOOL userInitiated;                                //@synthesize userInitiated=_userInitiated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(BOOL)userInitiated;
-(void)setUserInitiated:(BOOL)arg1 ;
-(NSURL *)mailboxURL;
-(NSString *)messageActionPersistentID;
-(void)setMessageActionPersistentID:(NSString *)arg1 ;
-(void)setMailboxURL:(NSURL *)arg1 ;
@end

