/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

@class NSSet, NSArray;


@protocol ECLabelChangeMessageActionBuilder <ECLocalMessageActionBuilder>
@property (nonatomic,copy) NSSet * remoteIDs; 
@property (nonatomic,copy) NSArray * messages; 
@property (nonatomic,copy) NSSet * labelsToAdd; 
@property (nonatomic,copy) NSSet * labelsToRemove; 
@required
-(void)setMessages:(id)arg1;
-(NSArray *)messages;
-(NSSet *)remoteIDs;
-(void)setRemoteIDs:(id)arg1;
-(NSSet *)labelsToAdd;
-(NSSet *)labelsToRemove;
-(void)setLabelsToAdd:(id)arg1;
-(void)setLabelsToRemove:(id)arg1;

@end

