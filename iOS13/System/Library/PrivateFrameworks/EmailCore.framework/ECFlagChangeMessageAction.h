/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/ECLocalMessageAction.h>
#import <libobjc.A.dylib/ECFlagChangeMessageActionBuilder.h>

@class NSSet, NSArray, ECMessageFlagChange, NSString, NSURL;

@interface ECFlagChangeMessageAction : ECLocalMessageAction <ECFlagChangeMessageActionBuilder> {

	NSSet* _remoteIDs;
	NSArray* _messages;
	ECMessageFlagChange* _flagChange;

}

@property (nonatomic,copy) NSSet * remoteIDs;                                   //@synthesize remoteIDs=_remoteIDs - In the implementation block
@property (nonatomic,copy) NSArray * messages;                                  //@synthesize messages=_messages - In the implementation block
@property (nonatomic,retain) ECMessageFlagChange * flagChange;                  //@synthesize flagChange=_flagChange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * messageActionPersistentID; 
@property (nonatomic,retain) NSURL * mailboxURL; 
@property (assign,nonatomic) BOOL userInitiated; 
-(NSArray *)messages;
-(void)setMessages:(NSArray *)arg1 ;
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(ECMessageFlagChange *)flagChange;
-(NSSet *)remoteIDs;
-(void)setRemoteIDs:(NSSet *)arg1 ;
-(void)setFlagChange:(ECMessageFlagChange *)arg1 ;
@end

