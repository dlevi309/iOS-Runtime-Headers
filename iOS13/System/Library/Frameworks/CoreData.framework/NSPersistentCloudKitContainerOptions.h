/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSString;

@interface NSPersistentCloudKitContainerOptions : NSObject {

	BOOL _useDeviceToDeviceEncryption;
	NSString* _containerIdentifier;
	NSString* _apsConnectionMachServiceName;

}

@property (assign) BOOL useEncryptedStorage; 
@property (nonatomic,retain) NSString * apsConnectionMachServiceName;              //@synthesize apsConnectionMachServiceName=_apsConnectionMachServiceName - In the implementation block
@property (assign,nonatomic) BOOL useDeviceToDeviceEncryption;                     //@synthesize useDeviceToDeviceEncryption=_useDeviceToDeviceEncryption - In the implementation block
@property (copy,readonly) NSString * containerIdentifier;                          //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
-(void)dealloc;
-(NSString *)containerIdentifier;
-(void)setUseEncryptedStorage:(BOOL)arg1 ;
-(BOOL)useDeviceToDeviceEncryption;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(NSString *)apsConnectionMachServiceName;
-(void)setUseDeviceToDeviceEncryption:(BOOL)arg1 ;
-(BOOL)useEncryptedStorage;
-(void)setApsConnectionMachServiceName:(NSString *)arg1 ;
@end

