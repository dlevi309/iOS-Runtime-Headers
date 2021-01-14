/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) NSString * messageActionPersistentID; 
@property (nonatomic,retain) NSURL * mailboxURL; 
@property (assign,nonatomic) BOOL userInitiated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMessages:(NSArray *)arg1 ;
-(NSArray *)messages;
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(ECMessageFlagChange *)flagChange;
-(NSSet *)remoteIDs;
-(void)setFlagChange:(ECMessageFlagChange *)arg1 ;
-(void)setRemoteIDs:(NSSet *)arg1 ;
@end

