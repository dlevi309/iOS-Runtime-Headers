/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/ECLocalMessageAction.h>
#import <libobjc.A.dylib/ECLabelChangeMessageActionBuilder.h>

@class NSSet, NSArray, NSString, NSURL;

@interface ECLabelChangeMessageAction : ECLocalMessageAction <ECLabelChangeMessageActionBuilder> {

	NSSet* _remoteIDs;
	NSArray* _messages;
	NSSet* _labelsToAdd;
	NSSet* _labelsToRemove;

}

@property (nonatomic,copy) NSSet * remoteIDs;                                   //@synthesize remoteIDs=_remoteIDs - In the implementation block
@property (nonatomic,copy) NSArray * messages;                                  //@synthesize messages=_messages - In the implementation block
@property (nonatomic,copy) NSSet * labelsToAdd;                                 //@synthesize labelsToAdd=_labelsToAdd - In the implementation block
@property (nonatomic,copy) NSSet * labelsToRemove;                              //@synthesize labelsToRemove=_labelsToRemove - In the implementation block
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
-(NSSet *)remoteIDs;
-(void)setRemoteIDs:(NSSet *)arg1 ;
-(NSSet *)labelsToAdd;
-(NSSet *)labelsToRemove;
-(void)setLabelsToAdd:(NSSet *)arg1 ;
-(void)setLabelsToRemove:(NSSet *)arg1 ;
@end

