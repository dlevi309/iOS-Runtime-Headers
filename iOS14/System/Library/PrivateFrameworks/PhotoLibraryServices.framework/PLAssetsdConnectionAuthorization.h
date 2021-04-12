/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLClientAuthorization.h>

@protocol OS_dispatch_queue;
@class NSString, NSSet, NSNumber, PLSandboxedURL, NSDate, BKSApplicationStateMonitor, NSObject;

@interface PLAssetsdConnectionAuthorization : NSObject <PLClientAuthorization> {

	SCD_Struct_PL32 _auditToken;
	NSSet* _photoKitEntitlements;
	NSNumber* _photosAccessAllowed;
	NSNumber* _photosAddAccessAllowed;
	BOOL _libraryUpgradeAuthorized;
	BOOL _directDatabaseAccessAuthorized;
	BOOL _directDatabaseWriteAuthorized;
	NSString* _fetchFilterIdentifier;
	PLSandboxedURL* _clientMainBundleSandboxedURL;
	NSDate* _connectionStartDate;
	BKSApplicationStateMonitor* _applicationStateMonitor;
	NSObject*<OS_dispatch_queue> _duetUpdateQueue;
	BOOL _photoKitEntitled;
	BOOL _cloudInternalEntitled;
	BOOL _analyticsCacheReadEntitled;
	BOOL _analyticsCacheWriteEntitled;
	BOOL _clientLimitedLibraryCapable;
	int _clientProcessIdentifier;
	NSString* _trustedCallerBundleID;
	NSString* _trustedCallerDisplayName;
	NSString* _trustedCallerPhotoLibraryUsageDescription;

}

@property (nonatomic,readonly) NSString * trustedCallerBundleID;                                                   //@synthesize trustedCallerBundleID=_trustedCallerBundleID - In the implementation block
@property (nonatomic,readonly) NSString * fetchFilterIdentifier;                                                   //@synthesize fetchFilterIdentifier=_fetchFilterIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * trustedCallerDisplayName;                                                //@synthesize trustedCallerDisplayName=_trustedCallerDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * trustedCallerPhotoLibraryUsageDescription;                               //@synthesize trustedCallerPhotoLibraryUsageDescription=_trustedCallerPhotoLibraryUsageDescription - In the implementation block
@property (nonatomic,readonly) int clientProcessIdentifier;                                                        //@synthesize clientProcessIdentifier=_clientProcessIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL photoKitEntitled;                                                              //@synthesize photoKitEntitled=_photoKitEntitled - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PL32 clientAuditToken; 
@property (nonatomic,readonly) BOOL directDatabaseAccessAuthorized; 
@property (nonatomic,readonly) BOOL directDatabaseWriteAuthorized; 
@property (nonatomic,readonly) BOOL cloudInternalEntitled;                                                         //@synthesize cloudInternalEntitled=_cloudInternalEntitled - In the implementation block
@property (nonatomic,readonly) BOOL analyticsCacheReadEntitled;                                                    //@synthesize analyticsCacheReadEntitled=_analyticsCacheReadEntitled - In the implementation block
@property (nonatomic,readonly) BOOL analyticsCacheWriteEntitled;                                                   //@synthesize analyticsCacheWriteEntitled=_analyticsCacheWriteEntitled - In the implementation block
@property (nonatomic,readonly) BOOL limitedLibraryMode; 
@property (getter=isClientLimitedLibraryCapable,nonatomic,readonly) BOOL clientLimitedLibraryCapable;              //@synthesize clientLimitedLibraryCapable=_clientLimitedLibraryCapable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(id)arg1 ;
-(BOOL)isClientAuthorizedForTCCServicePhotos;
-(BOOL)photoKitEntitledFor:(id)arg1 ;
-(void)_trackCAConnectionEvent;
-(void)_trackDKEventIfNecessary;
-(BOOL)isClientAuthorizedForLibraryUpgrade;
-(BOOL)isPhotosClient;
-(BOOL)cloudInternalEntitled;
-(int)clientProcessIdentifier;
-(NSString *)description;
-(void)setClientLimitedLibraryCapable:(BOOL)arg1 ;
-(BOOL)isClientInRestrictedMode;
-(BOOL)directDatabaseWriteAuthorized;
-(void)_handleDuetReportIsForground:(BOOL)arg1 ;
-(SCD_Struct_PL32)clientAuditToken;
-(BOOL)isClientInLimitedLibraryMode;
-(NSString *)trustedCallerPhotoLibraryUsageDescription;
-(BOOL)isClientInFullLibraryMode;
-(BOOL)analyticsCacheWriteEntitled;
-(BOOL)isClientAuthorizedForTCCServicePhotosAdd;
-(NSString *)fetchFilterIdentifier;
-(BOOL)directDatabaseAccessAuthorized;
-(NSString *)trustedCallerDisplayName;
-(BOOL)photoKitEntitled;
-(BOOL)limitedLibraryMode;
-(BOOL)isClientLimitedLibraryCapable;
-(BOOL)_shouldTrackEventForBundle:(id)arg1 ;
-(NSString *)trustedCallerBundleID;
-(BOOL)analyticsCacheReadEntitled;
-(void)setClientMainBundleSandboxedURL:(id)arg1 ;
-(void)setupFromConnection:(id)arg1 ;
-(void)handleInvalidation;
@end

