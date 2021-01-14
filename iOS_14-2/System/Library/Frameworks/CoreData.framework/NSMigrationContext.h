/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableDictionary, NSMigrationManager, NSEntityMapping, NSPropertyMapping, NSString;

@interface NSMigrationContext : NSObject {

	NSMutableDictionary* _bySourceAssociationTable;
	NSMutableDictionary* _byDestinationAssociationTable;
	NSMutableDictionary* _byMappingBySourceAssociationTable;
	NSMutableDictionary* _byMappingByDestinationAssociationTable;
	NSMigrationManager* _migrationManager;
	NSEntityMapping* _currentMapping;
	unsigned long long _currentStep;
	NSPropertyMapping* _currentPropertyMapping;
	NSString* _destinationConfigurationForCloudKitValidation;

}

@property (retain) NSEntityMapping * currentEntityMapping; 
@property (retain) NSPropertyMapping * currentPropertyMapping; 
@property (assign) unsigned long long currentMigrationStep; 
@property (retain) NSString * destinationConfigurationForCloudKitValidation;              //@synthesize destinationConfigurationForCloudKitValidation=_destinationConfigurationForCloudKitValidation - In the implementation block
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
-(NSString *)destinationConfigurationForCloudKitValidation;
-(void)setDestinationConfigurationForCloudKitValidation:(NSString *)arg1 ;
-(void)dealloc;
@end

