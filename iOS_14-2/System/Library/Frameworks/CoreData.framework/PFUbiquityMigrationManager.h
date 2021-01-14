/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PFUbiquityLocation *)rootLocation;
-(id)initWithDestinationModel:(id)arg1 sourceModel:(id)arg2 ubiquityRootLocation:(id)arg3 localPeerID:(id)arg4 ;
-(id)initWithDestinationModel:(id)arg1 storeName:(id)arg2 previousModelVersionHash:(id)arg3 ubiquityRootLocation:(id)arg4 localPeerID:(id)arg5 ;
-(BOOL)migrateTransactionLogs:(BOOL)arg1 andBaselineIfNecessaryForStoreName:(id)arg2 peerID:(id)arg3 error:(id*)arg4 ;
-(NSManagedObjectModel *)sourceModel;
-(NSManagedObjectModel *)destinationModel;
-(void)dealloc;
@end

