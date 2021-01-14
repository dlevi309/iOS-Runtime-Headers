/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EMVIPManager.h>

@protocol OS_dispatch_queue;
@class NSSet, EAEmailAddressSet, NSMutableDictionary, CNContactStore, NSUbiquitousKeyValueStore, NSObject, NSURL, NSString;

@interface EDVIPManager : NSObject <EFLoggable, EMVIPManager> {

	NSMutableDictionary* _vipsByIdentifier;
	EAEmailAddressSet* _cachedEmailAddresses;
	CNContactStore* _contactStore;
	NSUbiquitousKeyValueStore* _keyValueStore;
	NSObject*<OS_dispatch_queue> _operationQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSURL* _plistURL;

}

@property (nonatomic,readonly) CNContactStore * contactStore;                               //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) NSUbiquitousKeyValueStore * keyValueStore;                   //@synthesize keyValueStore=_keyValueStore - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> operationQueue;                 //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notificationQueue;              //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,readonly) NSURL * plistURL;                                            //@synthesize plistURL=_plistURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * allVIPs; 
@property (nonatomic,copy,readonly) EAEmailAddressSet * allVIPEmailAddresses; 
@property (nonatomic,readonly) BOOL hasVIPs; 
+(id)log;
+(id)_contactDescriptors;
-(CNContactStore *)contactStore;
-(NSObject*<OS_dispatch_queue>)operationQueue;
-(void)_removeVIPsWithIdentifiers:(id)arg1 ;
-(void)_loadVIPs;
-(void)_updateLocalWithCloud:(id)arg1 refresh:(BOOL)arg2 ;
-(id)initWithDirectoryURL:(id)arg1 keyValueStore:(id)arg2 contactStore:(id)arg3 ;
-(id)_contactFromContacts:(id)arg1 matchingMostAddresses:(id)arg2 ;
-(id)_vipsDictionary;
-(void)_mergeVIPs;
-(id)_serializedData;
-(id)_contactForName:(id)arg1 emailAddresses:(id)arg2 ;
-(BOOL)isVIPAddress:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(void)removeVIPsWithEmailAddresses:(id)arg1 ;
-(NSURL *)plistURL;
-(void)_saveVIPsLocally;
-(void)saveVIPs:(id)arg1 ;
-(void)removeVIPsWithIdentifiers:(id)arg1 ;
-(void)_keyValueStoreChanged:(id)arg1 ;
-(EAEmailAddressSet *)allVIPEmailAddresses;
-(BOOL)hasVIPs;
-(NSSet *)allVIPs;
-(id)initWithDirectoryURL:(id)arg1 ;
-(id)_cloudKeyForIdentifier:(id)arg1 ;
-(BOOL)_isVIPForContact:(id)arg1 orAddresses:(id)arg2 ;
-(NSUbiquitousKeyValueStore *)keyValueStore;
-(id)allVIPWaitForResult;
-(id)vipWithIdentifier:(id)arg1 ;
-(void)_synchronizeKVStore;
-(id)_validatedCloudVIPFromStore:(id)arg1 withCloudKey:(id)arg2 ;
-(void)_saveVIPs;
-(void)_updateCloudWithLocal;
-(id)_allVIPEmailAddresses;
-(void)dealloc;
@end

