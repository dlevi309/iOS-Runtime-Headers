/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/ECLocalMessageAction.h>
#import <libobjc.A.dylib/ECFlagChangeUndownloadedMessageActionBuilder.h>

@class NSString, ECMessageFlagChange, NSURL;

@interface ECFlagChangeUndownloadedMessageAction : ECLocalMessageAction <ECFlagChangeUndownloadedMessageActionBuilder> {

	NSString* _oldestPersistedRemoteID;
	ECMessageFlagChange* _flagChange;

}

@property (nonatomic,copy) NSString * oldestPersistedRemoteID;                  //@synthesize oldestPersistedRemoteID=_oldestPersistedRemoteID - In the implementation block
@property (nonatomic,retain) ECMessageFlagChange * flagChange;                  //@synthesize flagChange=_flagChange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * messageActionPersistentID; 
@property (nonatomic,retain) NSURL * mailboxURL; 
@property (assign,nonatomic) BOOL userInitiated; 
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(ECMessageFlagChange *)flagChange;
-(void)setFlagChange:(ECMessageFlagChange *)arg1 ;
-(NSString *)oldestPersistedRemoteID;
-(void)setOldestPersistedRemoteID:(NSString *)arg1 ;
@end

