/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol NSCloudKitMirroringDelegateProgressProvider;
@class NSString, NSObject;

@interface NSPersistentCloudKitContainerOptions : NSObject {

	BOOL _useDeviceToDeviceEncryption;
	NSString* _containerIdentifier;
	NSString* _apsConnectionMachServiceName;
	long long _databaseScope;
	NSObject*<NSCloudKitMirroringDelegateProgressProvider> _progressProvider;

}

@property (assign) BOOL useEncryptedStorage; 
@property (assign) BOOL useDeviceToDeviceEncryption;                                                                      //@synthesize useDeviceToDeviceEncryption=_useDeviceToDeviceEncryption - In the implementation block
@property (nonatomic,retain) NSString * apsConnectionMachServiceName;                                                     //@synthesize apsConnectionMachServiceName=_apsConnectionMachServiceName - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<NSCloudKitMirroringDelegateProgressProvider> progressProvider;              //@synthesize progressProvider=_progressProvider - In the implementation block
@property (copy,readonly) NSString * containerIdentifier;                                                                 //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (assign,nonatomic) long long databaseScope;                                                                     //@synthesize databaseScope=_databaseScope - In the implementation block
-(void)setUseEncryptedStorage:(BOOL)arg1 ;
-(void)setDatabaseScope:(long long)arg1 ;
-(NSString *)containerIdentifier;
-(NSString *)apsConnectionMachServiceName;
-(void)setUseDeviceToDeviceEncryption:(BOOL)arg1 ;
-(void)setProgressProvider:(NSObject*<NSCloudKitMirroringDelegateProgressProvider>)arg1 ;
-(long long)databaseScope;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(BOOL)useDeviceToDeviceEncryption;
-(void)setApsConnectionMachServiceName:(NSString *)arg1 ;
-(NSObject*<NSCloudKitMirroringDelegateProgressProvider>)progressProvider;
-(void)dealloc;
-(BOOL)useEncryptedStorage;
@end

