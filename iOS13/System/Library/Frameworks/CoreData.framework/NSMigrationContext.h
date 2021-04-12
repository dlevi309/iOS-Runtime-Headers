/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableDictionary, NSMigrationManager, NSEntityMapping, NSPropertyMapping;

@interface NSMigrationContext : NSObject {

	NSMutableDictionary* _bySourceAssociationTable;
	NSMutableDictionary* _byDestinationAssociationTable;
	NSMutableDictionary* _byMappingBySourceAssociationTable;
	NSMutableDictionary* _byMappingByDestinationAssociationTable;
	NSMigrationManager* _migrationManager;
	NSEntityMapping* _currentMapping;
	unsigned long long _currentStep;
	NSPropertyMapping* _currentPropertyMapping;

}

@property (retain) NSEntityMapping * currentEntityMapping; 
@property (retain) NSPropertyMapping * currentPropertyMapping; 
@property (assign) unsigned long long currentMigrationStep; 
-(void)dealloc;
-(void)setCurrentPropertyMapping:(NSPropertyMapping *)arg1 ;
-(void)associateSourceInstance:(id)arg1 withDestinationInstance:(id)arg2 forEntityMapping:(id)arg3 ;
-(void)clearAssociationTables;
-(void)setCurrentMigrationStep:(unsigned long long)arg1 ;
-(void)_createAssociationsBySource:(id)arg1 withDestination:(id)arg2 forEntityMapping:(id)arg3 ;
-(void)_createAssociationsByDestination:(id)arg1 fromSource:(id)arg2 forEntityMapping:(id)arg3 ;
-(id)initWithMigrationManager:(id)arg1 ;
-(NSEntityMapping *)currentEntityMapping;
-(void)setCurrentEntityMapping:(NSEntityMapping *)arg1 ;
-(NSPropertyMapping *)currentPropertyMapping;
-(unsigned long long)currentMigrationStep;
-(id)destinationInstancesForEntityMapping:(id)arg1 sourceInstance:(id)arg2 ;
-(id)sourceInstancesForEntityMapping:(id)arg1 destinationInstance:(id)arg2 ;
@end

