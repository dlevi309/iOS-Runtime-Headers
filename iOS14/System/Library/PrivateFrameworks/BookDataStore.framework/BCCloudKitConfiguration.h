/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <libobjc.A.dylib/BCContainerConfiguration.h>

@class NSString, NSArray;

@interface BCCloudKitConfiguration : NSObject <BCContainerConfiguration> {

	BOOL _requiresDeviceToDeviceEncryption;
	NSString* _queueIdentifier;
	NSString* _containerIdentifier;
	NSArray* _appZones;
	NSArray* _serviceZones;
	NSString* _dbArchiveFolderName;
	NSString* _dbArchiveExtension;
	NSString* _dbArchiveFilename;
	NSString* _dbSubscriptionID;
	NSString* _appBundleIdentifier;

}

@property (nonatomic,retain) NSString * queueIdentifier;                         //@synthesize queueIdentifier=_queueIdentifier - In the implementation block
@property (nonatomic,retain) NSString * containerIdentifier;                     //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * appZones;                                 //@synthesize appZones=_appZones - In the implementation block
@property (nonatomic,retain) NSArray * serviceZones;                             //@synthesize serviceZones=_serviceZones - In the implementation block
@property (nonatomic,retain) NSString * dbArchiveFolderName;                     //@synthesize dbArchiveFolderName=_dbArchiveFolderName - In the implementation block
@property (nonatomic,retain) NSString * dbArchiveExtension;                      //@synthesize dbArchiveExtension=_dbArchiveExtension - In the implementation block
@property (nonatomic,retain) NSString * dbArchiveFilename;                       //@synthesize dbArchiveFilename=_dbArchiveFilename - In the implementation block
@property (nonatomic,retain) NSString * dbSubscriptionID;                        //@synthesize dbSubscriptionID=_dbSubscriptionID - In the implementation block
@property (nonatomic,retain) NSString * appBundleIdentifier;                     //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL requiresDeviceToDeviceEncryption;              //@synthesize requiresDeviceToDeviceEncryption=_requiresDeviceToDeviceEncryption - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configuration;
-(NSString *)queueIdentifier;
-(void)setQueueIdentifier:(NSString *)arg1 ;
-(NSString *)appBundleIdentifier;
-(NSString *)containerIdentifier;
-(BOOL)requiresDeviceToDeviceEncryption;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(void)setAppZones:(NSArray *)arg1 ;
-(void)setServiceZones:(NSArray *)arg1 ;
-(void)setDbArchiveFolderName:(NSString *)arg1 ;
-(void)setDbArchiveExtension:(NSString *)arg1 ;
-(void)setDbArchiveFilename:(NSString *)arg1 ;
-(void)setDbSubscriptionID:(NSString *)arg1 ;
-(void)setRequiresDeviceToDeviceEncryption:(BOOL)arg1 ;
-(BOOL)shouldArchiveData:(id)arg1 ;
-(BOOL)shouldPerformDatabaseSubscriptionForServiceMode:(BOOL)arg1 ;
-(NSArray *)appZones;
-(NSArray *)serviceZones;
-(NSString *)dbArchiveFolderName;
-(NSString *)dbArchiveExtension;
-(NSString *)dbArchiveFilename;
-(NSString *)dbSubscriptionID;
@end

