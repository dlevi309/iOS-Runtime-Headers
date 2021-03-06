/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADObjectInterface.h>

@interface CADObjectOperationGroup : CADOperationGroup <CADObjectInterface>
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventAccess;
-(void)CADObject:(id)arg1 getDataPropertyWithName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObjectIsManaged:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADObject:(id)arg1 getRelatedObjectWithRelationName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(id)arg1 getPropertiesWithNames:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(id)arg1 getPropertyWithName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADDatabaseInsertObjectsWithTempObjectIDs:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADObjectsExist:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADObjectExists:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADObject:(id)arg1 getRelatedObjectsWithRelationName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADDatabaseDeleteObjectsWithObjectIDs:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADObject:(id)arg1 getStringPropertyWithName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(id)arg1 getDatePropertyWithName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(id)arg1 getNumberPropertyWithName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(id)arg1 setAttributes:(id)arg2 andRelations:(id)arg3 reply:(/*^block*/id)arg4 ;
@end

