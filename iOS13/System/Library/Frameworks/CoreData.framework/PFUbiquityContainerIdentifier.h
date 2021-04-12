/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSString, PFUbiquityLocation, NSURL, NSOperationQueue, NSSet;

@interface PFUbiquityContainerIdentifier : NSObject <NSFilePresenter> {

	NSString* _storeName;
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _uuidString;
	PFUbiquityLocation* _uuidFileLocation;
	NSURL* _presentedItemURL;
	BOOL _usedExistingUUIDFile;

}

@property (nonatomic,readonly) NSString * uuidString;                              //@synthesize uuidString=_uuidString - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * uuidFileLocation;              //@synthesize uuidFileLocation=_uuidFileLocation - In the implementation block
@property (nonatomic,readonly) BOOL usedExistingUUIDFile;                          //@synthesize usedExistingUUIDFile=_usedExistingUUIDFile - In the implementation block
@property (copy,readonly) NSURL * presentedItemURL;                                //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)uuidString;
-(id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(BOOL)identifyContainer:(id*)arg1 ;
-(BOOL)usedExistingUUIDFile;
-(BOOL)replaceIdentifierWithUUID:(id)arg1 error:(id*)arg2 ;
-(void)setUUIDStringFromLocation:(id)arg1 ;
-(BOOL)writeToDisk:(id*)arg1 ;
-(PFUbiquityLocation *)uuidFileLocation;
@end

