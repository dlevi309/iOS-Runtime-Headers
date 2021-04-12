/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) BOOL hasVIPs; 
@property (nonatomic,copy,readonly) NSSet * allVIPs; 
@property (nonatomic,copy,readonly) EAEmailAddressSet * allVIPEmailAddresses; 
+(id)log;
+(id)_contactDescriptors;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)operationQueue;
-(NSUbiquitousKeyValueStore *)keyValueStore;
-(CNContactStore *)contactStore;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(id)_serializedData;
-(id)initWithDirectoryURL:(id)arg1 ;
-(void)saveVIPs:(id)arg1 ;
-(void)removeVIPsWithIdentifiers:(id)arg1 ;
-(void)removeVIPsWithEmailAddresses:(id)arg1 ;
-(BOOL)isVIPAddress:(id)arg1 ;
-(EAEmailAddressSet *)allVIPEmailAddresses;
-(id)vipWithIdentifier:(id)arg1 ;
-(BOOL)hasVIPs;
-(NSSet *)allVIPs;
-(NSURL *)plistURL;
-(id)initWithDirectoryURL:(id)arg1 keyValueStore:(id)arg2 contactStore:(id)arg3 ;
-(void)_loadVIPs;
-(void)_synchronizeKVStore;
-(void)_updateLocalWithCloud:(id)arg1 refresh:(BOOL)arg2 ;
-(void)_keyValueStoreChanged:(id)arg1 ;
-(id)_allVIPEmailAddresses;
-(id)_contactForName:(id)arg1 emailAddresses:(id)arg2 ;
-(BOOL)_isVIPForContact:(id)arg1 orAddresses:(id)arg2 ;
-(void)_saveVIPs;
-(void)_removeVIPsWithIdentifiers:(id)arg1 ;
-(id)_vipsDictionary;
-(void)_saveVIPsLocally;
-(void)_updateCloudWithLocal;
-(id)_cloudKeyForIdentifier:(id)arg1 ;
-(id)_validatedCloudVIPFromStore:(id)arg1 withCloudKey:(id)arg2 ;
-(void)_mergeVIPs;
-(id)_contactFromContacts:(id)arg1 matchingMostAddresses:(id)arg2 ;
@end

