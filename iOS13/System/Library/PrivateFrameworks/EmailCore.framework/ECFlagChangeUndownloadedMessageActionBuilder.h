/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

@class NSString, ECMessageFlagChange;


@protocol ECFlagChangeUndownloadedMessageActionBuilder <ECLocalMessageActionBuilder>
@property (nonatomic,copy) NSString * oldestPersistedRemoteID; 
@property (nonatomic,retain) ECMessageFlagChange * flagChange; 
@required
-(ECMessageFlagChange *)flagChange;
-(void)setFlagChange:(id)arg1;
-(NSString *)oldestPersistedRemoteID;
-(void)setOldestPersistedRemoteID:(id)arg1;

@end

