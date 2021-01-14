/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

@class NSSet, NSArray, ECMessageFlagChange;


@protocol ECFlagChangeMessageActionBuilder <ECLocalMessageActionBuilder>
@property (nonatomic,copy) NSSet * remoteIDs; 
@property (nonatomic,copy) NSArray * messages; 
@property (nonatomic,retain) ECMessageFlagChange * flagChange; 
@required
-(void)setMessages:(id)arg1;
-(NSArray *)messages;
-(ECMessageFlagChange *)flagChange;
-(NSSet *)remoteIDs;
-(void)setFlagChange:(id)arg1;
-(void)setRemoteIDs:(id)arg1;

@end

