/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

@class NSSet, NSArray;


@protocol ECLabelChangeMessageActionBuilder <ECLocalMessageActionBuilder>
@property (nonatomic,copy) NSSet * remoteIDs; 
@property (nonatomic,copy) NSArray * messages; 
@property (nonatomic,copy) NSSet * labelsToAdd; 
@property (nonatomic,copy) NSSet * labelsToRemove; 
@required
-(NSArray *)messages;
-(void)setMessages:(id)arg1;
-(NSSet *)remoteIDs;
-(void)setRemoteIDs:(id)arg1;
-(NSSet *)labelsToAdd;
-(NSSet *)labelsToRemove;
-(void)setLabelsToAdd:(id)arg1;
-(void)setLabelsToRemove:(id)arg1;

@end

