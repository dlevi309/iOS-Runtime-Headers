/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

@class NSString, NSArray;


@protocol BCContainerConfiguration <NSObject>
@property (nonatomic,readonly) NSString * queueIdentifier; 
@property (nonatomic,readonly) NSString * containerIdentifier; 
@property (nonatomic,readonly) NSArray * appZones; 
@property (nonatomic,readonly) NSArray * serviceZones; 
@property (nonatomic,readonly) NSString * dbArchiveFolderName; 
@property (nonatomic,readonly) NSString * dbArchiveExtension; 
@property (nonatomic,readonly) NSString * dbArchiveFilename; 
@property (nonatomic,readonly) NSString * dbSubscriptionID; 
@property (nonatomic,readonly) NSString * appBundleIdentifier; 
@property (nonatomic,readonly) BOOL requiresDeviceToDeviceEncryption; 
@required
+(id)configuration;
-(NSString *)containerIdentifier;
-(NSString *)appBundleIdentifier;
-(NSString *)queueIdentifier;
-(BOOL)requiresDeviceToDeviceEncryption;
-(BOOL)shouldArchiveData:(id)arg1;
-(BOOL)shouldPerformDatabaseSubscriptionForServiceMode:(BOOL)arg1;
-(NSArray *)appZones;
-(NSArray *)serviceZones;
-(NSString *)dbArchiveFolderName;
-(NSString *)dbArchiveExtension;
-(NSString *)dbArchiveFilename;
-(NSString *)dbSubscriptionID;

@end

