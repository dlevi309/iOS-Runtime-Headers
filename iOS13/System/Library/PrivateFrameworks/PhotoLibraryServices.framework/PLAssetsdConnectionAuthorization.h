/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLClientAuthorization.h>

@protocol OS_dispatch_queue;
@class NSString, NSSet, NSDate, BKSApplicationStateMonitor, NSObject;

@interface PLAssetsdConnectionAuthorization : NSObject <PLClientAuthorization> {

	SCD_Struct_PL32 _auditToken;
	NSSet* _photoKitEntitlements;
	int _kTCCPhotosAuthorized;
	int _kTCCPhotosAddAuthorized;
	BOOL _libraryUpgradeAuthorized;
	BOOL _directDatabaseAccessAuthorized;
	BOOL _directDatabaseWriteAuthorized;
	NSDate* _connectionStartDate;
	BKSApplicationStateMonitor* _applicationStateMonitor;
	NSObject*<OS_dispatch_queue> _duetUpdateQueue;
	BOOL _photoKitEntitled;
	int _clientProcessIdentifier;
	NSString* _trustedCallerBundleID;
	NSString* _trustedCallerDisplayName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * trustedCallerBundleID;                 //@synthesize trustedCallerBundleID=_trustedCallerBundleID - In the implementation block
@property (nonatomic,readonly) NSString * trustedCallerDisplayName;              //@synthesize trustedCallerDisplayName=_trustedCallerDisplayName - In the implementation block
@property (nonatomic,readonly) int clientProcessIdentifier;                      //@synthesize clientProcessIdentifier=_clientProcessIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL photoKitEntitled;                            //@synthesize photoKitEntitled=_photoKitEntitled - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PL32 clientAuditToken; 
@property (nonatomic,readonly) BOOL directDatabaseAccessAuthorized; 
@property (nonatomic,readonly) BOOL directDatabaseWriteAuthorized; 
-(NSString *)description;
-(int)clientProcessIdentifier;
-(id)initWithConnection:(id)arg1 ;
-(void)handleInvalidation;
-(BOOL)isClientAuthorizedForTCCServicePhotos;
-(BOOL)isClientAuthorizedForTCCServicePhotosAdd;
-(SCD_Struct_PL32)clientAuditToken;
-(BOOL)isPhotosClient;
-(BOOL)photoKitEntitled;
-(NSString *)trustedCallerBundleID;
-(BOOL)photoKitEntitledFor:(id)arg1 ;
-(NSString *)trustedCallerDisplayName;
-(BOOL)directDatabaseAccessAuthorized;
-(BOOL)directDatabaseWriteAuthorized;
-(BOOL)isClientAuthorizedForLibraryUpgrade;
-(void)setupFromConnection:(id)arg1 ;
-(void)_trackCAConnectionEvent;
-(BOOL)_shouldTrackEventForBundle:(id)arg1 ;
-(void)_trackDKEventIfNecessary;
-(void)_handleDuetReportIsForground:(BOOL)arg1 ;
@end

