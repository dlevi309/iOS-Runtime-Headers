/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSString;


@protocol PLClientAuthorization <NSObject>
@property (nonatomic,readonly) NSString * trustedCallerBundleID; 
@property (nonatomic,readonly) NSString * fetchFilterIdentifier; 
@property (nonatomic,readonly) NSString * trustedCallerDisplayName; 
@property (nonatomic,readonly) NSString * trustedCallerPhotoLibraryUsageDescription; 
@property (nonatomic,readonly) int clientProcessIdentifier; 
@property (nonatomic,readonly) BOOL photoKitEntitled; 
@property (nonatomic,readonly) SCD_Struct_PL32 clientAuditToken; 
@property (nonatomic,readonly) BOOL directDatabaseAccessAuthorized; 
@property (nonatomic,readonly) BOOL directDatabaseWriteAuthorized; 
@property (nonatomic,readonly) BOOL cloudInternalEntitled; 
@property (nonatomic,readonly) BOOL analyticsCacheReadEntitled; 
@property (nonatomic,readonly) BOOL analyticsCacheWriteEntitled; 
@property (nonatomic,readonly) BOOL limitedLibraryMode; 
@property (getter=isClientLimitedLibraryCapable,nonatomic,readonly) BOOL clientLimitedLibraryCapable; 
@required
-(BOOL)photoKitEntitledFor:(id)arg1;
-(BOOL)cloudInternalEntitled;
-(int)clientProcessIdentifier;
-(BOOL)directDatabaseWriteAuthorized;
-(SCD_Struct_PL32)clientAuditToken;
-(NSString *)trustedCallerPhotoLibraryUsageDescription;
-(BOOL)analyticsCacheWriteEntitled;
-(NSString *)fetchFilterIdentifier;
-(BOOL)directDatabaseAccessAuthorized;
-(NSString *)trustedCallerDisplayName;
-(BOOL)photoKitEntitled;
-(BOOL)limitedLibraryMode;
-(BOOL)isClientLimitedLibraryCapable;
-(NSString *)trustedCallerBundleID;
-(BOOL)analyticsCacheReadEntitled;

@end

