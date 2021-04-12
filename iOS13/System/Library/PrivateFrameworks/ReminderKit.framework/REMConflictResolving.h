/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

@class REMResolutionTokenMap;


@protocol REMConflictResolving
@property (nonatomic,retain) REMResolutionTokenMap * resolutionTokenMap; 
@required
-(id)changedKeys;
-(id)resolutionTokenKeyForChangedKey:(id)arg1;
-(REMResolutionTokenMap *)resolutionTokenMap;
-(void)setResolutionTokenMap:(id)arg1;

@end

