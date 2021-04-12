/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <Foundation/NSOperation.h>

@class NSString, NSPersistentStore, PFUbiquityLocation, NSLock, NSObject;

@interface PFUbiquityImportOperation : NSOperation {

	NSString* _localPeerID;
	NSString* _storeName;
	NSPersistentStore* _store;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSLock* _delegateLock;
	BOOL _lockedDelegateLock;
	NSObject* _delegate;

}

@property (nonatomic,readonly) NSString * localPeerID;                                 //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                   //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;              //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * store;                              //@synthesize store=_store - In the implementation block
@property (assign) NSObject * delegate; 
-(id)init;
-(void)dealloc;
-(id)description;
-(NSObject *)delegate;
-(void)setDelegate:(NSObject *)arg1 ;
-(void)cancel;
-(NSPersistentStore *)store;
-(NSString *)localPeerID;
-(NSString *)storeName;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(id)retainedDelegate;
-(void)storeWillBeRemoved:(id)arg1 ;
-(void)lockDelegateLock;
-(void)unlockDelegateLock;
-(id)initWithStoreName:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
@end

