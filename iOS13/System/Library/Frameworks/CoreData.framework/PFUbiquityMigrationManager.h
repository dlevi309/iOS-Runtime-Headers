/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSManagedObjectModel, PFUbiquityLocation, NSString;

@interface PFUbiquityMigrationManager : NSObject {

	NSManagedObjectModel* _destinationModel;
	NSManagedObjectModel* _sourceModel;
	PFUbiquityLocation* _rootLocation;
	NSString* _localPeerID;

}

@property (readonly) NSManagedObjectModel * sourceModel;                   //@synthesize sourceModel=_sourceModel - In the implementation block
@property (readonly) NSManagedObjectModel * destinationModel;              //@synthesize destinationModel=_destinationModel - In the implementation block
@property (readonly) PFUbiquityLocation * rootLocation;                    //@synthesize rootLocation=_rootLocation - In the implementation block
-(void)dealloc;
-(NSManagedObjectModel *)sourceModel;
-(NSManagedObjectModel *)destinationModel;
-(PFUbiquityLocation *)rootLocation;
-(id)initWithDestinationModel:(id)arg1 sourceModel:(id)arg2 ubiquityRootLocation:(id)arg3 localPeerID:(id)arg4 ;
-(id)initWithDestinationModel:(id)arg1 storeName:(id)arg2 previousModelVersionHash:(id)arg3 ubiquityRootLocation:(id)arg4 localPeerID:(id)arg5 ;
-(BOOL)migrateTransactionLogs:(BOOL)arg1 andBaselineIfNecessaryForStoreName:(id)arg2 peerID:(id)arg3 error:(id*)arg4 ;
@end

