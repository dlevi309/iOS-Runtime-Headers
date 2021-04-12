/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUserInitiated:(BOOL)arg1 ;
-(NSURL *)mailboxURL;
-(BOOL)userInitiated;
-(NSString *)messageActionPersistentID;
-(void)setMessageActionPersistentID:(NSString *)arg1 ;
-(void)setMailboxURL:(NSURL *)arg1 ;
@end

