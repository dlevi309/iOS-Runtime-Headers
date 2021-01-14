/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <ActivitySharingPlugin/ActivitySharingPlugin-Structs.h>
#import <HealthDaemon/HDEntityEncoder.h>

@interface ASDatabaseCompetitionListEntryEncoder : HDEntityEncoder
-(id)objectForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
-(id)orderedProperties;
-(id)codableRepresentationForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
-(BOOL)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 error:(id*)arg4 ;
@end

