/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <libobjc.A.dylib/BCCloudKitChangeTokenStore.h>

@class NSManagedObjectContext, NSString, BCCloudKitController;

@interface BCCloudChangeTokenController : NSObject <BCCloudKitChangeTokenStore> {

	BOOL _enableCloudSync;
	NSManagedObjectContext* _moc;
	NSString* _zoneName;
	BCCloudKitController* _cloudKitController;

}

@property (assign,nonatomic,__weak) NSManagedObjectContext * moc;                           //@synthesize moc=_moc - In the implementation block
@property (nonatomic,copy) NSString * zoneName;                                             //@synthesize zoneName=_zoneName - In the implementation block
@property (assign,nonatomic,__weak) BCCloudKitController * cloudKitController;              //@synthesize cloudKitController=_cloudKitController - In the implementation block
@property (assign,nonatomic) BOOL enableCloudSync;                                          //@synthesize enableCloudSync=_enableCloudSync - In the implementation block
-(NSManagedObjectContext *)moc;
-(NSString *)zoneName;
-(void)setMoc:(NSManagedObjectContext *)arg1 ;
-(BOOL)cloudSyncEnabled;
-(void)setZoneName:(NSString *)arg1 ;
-(void)dissociateCloudDataFromSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteCloudDataWithCompletion:(/*^block*/id)arg1 ;
-(BCCloudKitController *)cloudKitController;
-(void)setCloudKitController:(BCCloudKitController *)arg1 ;
-(BOOL)enableCloudSync;
-(void)setEnableCloudSync:(BOOL)arg1 ;
-(id)initWithMOC:(id)arg1 zoneName:(id)arg2 cloudKitController:(id)arg3 ;
-(void)serverChangeTokenWithCompletion:(/*^block*/id)arg1 ;
-(void)storeServerChangeToken:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

