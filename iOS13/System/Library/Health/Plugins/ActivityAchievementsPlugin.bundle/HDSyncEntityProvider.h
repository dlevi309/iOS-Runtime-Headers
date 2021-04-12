/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivityAchievementsPlugin.bundle/ActivityAchievementsPlugin
*/

@class NSString;


@protocol HDSyncEntityProvider <NSObject>
@property (nonatomic,copy,readonly) NSString * syncSchemaIdentifier; 
@required
-(id)orderedSyncEntities;
-(NSString *)syncSchemaIdentifier;

@end

