/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) NSString * messageActionPersistentID; 
@property (nonatomic,retain) NSURL * mailboxURL; 
@property (assign,nonatomic) BOOL userInitiated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(ECMessageFlagChange *)flagChange;
-(void)setFlagChange:(ECMessageFlagChange *)arg1 ;
-(NSString *)oldestPersistedRemoteID;
-(void)setOldestPersistedRemoteID:(NSString *)arg1 ;
@end

