/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivityAchievementsPlugin.bundle/ActivityAchievementsPlugin
*/


@protocol HDXPCListenerDelegate <NSObject>
@optional
-(void)connectionConfiguredForListener:(id)arg1 client:(id)arg2 exportedObject:(id)arg3;
-(void)connectionInvalidatedForListener:(id)arg1 client:(id)arg2 exportedObject:(id)arg3;

@required
-(id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3;

@end

