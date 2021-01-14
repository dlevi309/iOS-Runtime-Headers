/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(id)init;
-(NSString *)uuidString;
-(NSString *)description;
-(BOOL)identifyContainer:(id*)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(BOOL)usedExistingUUIDFile;
-(BOOL)replaceIdentifierWithUUID:(id)arg1 error:(id*)arg2 ;
-(void)setUUIDStringFromLocation:(id)arg1 ;
-(BOOL)writeToDisk:(id*)arg1 ;
-(PFUbiquityLocation *)uuidFileLocation;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

