/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSString;


@protocol PLClientAuthorization <NSObject>
@property (nonatomic,readonly) NSString * trustedCallerBundleID; 
@property (nonatomic,readonly) NSString * trustedCallerDisplayName; 
@property (nonatomic,readonly) int clientProcessIdentifier; 
@property (nonatomic,readonly) BOOL photoKitEntitled; 
@property (nonatomic,readonly) SCD_Struct_PL32 clientAuditToken; 
@property (nonatomic,readonly) BOOL directDatabaseAccessAuthorized; 
@property (nonatomic,readonly) BOOL directDatabaseWriteAuthorized; 
@required
-(int)clientProcessIdentifier;
-(SCD_Struct_PL32)clientAuditToken;
-(BOOL)photoKitEntitled;
-(NSString *)trustedCallerBundleID;
-(BOOL)photoKitEntitledFor:(id)arg1;
-(NSString *)trustedCallerDisplayName;
-(BOOL)directDatabaseAccessAuthorized;
-(BOOL)directDatabaseWriteAuthorized;

@end

