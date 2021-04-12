/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSManagedObjectModel, NSEntityMapping, NSError;

@interface _NSMappingModelBuilder : NSObject {

	NSManagedObjectModel* _sourceModel;
	NSManagedObjectModel* _destinationModel;
	NSEntityMapping* _currentEntityMapping;
	NSError* _error;

}
+(int)migrationDebugLevel;
+(void)setMigrationDebugLevel:(int)arg1 ;
-(id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2 ;
-(void)dealloc;
@end

