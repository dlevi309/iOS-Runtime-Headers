/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

