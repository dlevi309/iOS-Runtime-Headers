/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

@class REMResolutionTokenMap, NSData;


@protocol REMConflictResolving
@property (nonatomic,retain) REMResolutionTokenMap * resolutionTokenMap; 
@property (nonatomic,retain) NSData * resolutionTokenMapData; 
@required
-(void)setResolutionTokenMap:(id)arg1;
-(void)setResolutionTokenMapData:(id)arg1;
-(NSData *)resolutionTokenMapData;
-(id)changedKeys;
-(REMResolutionTokenMap *)resolutionTokenMap;
-(id)resolutionTokenKeyForChangedKey:(id)arg1;

@end

