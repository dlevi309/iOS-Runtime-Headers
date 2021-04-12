/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, PFUbiquityLocation, NSOperationQueue, NSSet, NSString;

@interface PFUbiquityMetadataFactoryFilePresenter : NSObject <NSFilePresenter> {

	NSURL* _presentedItemURL;
	PFUbiquityLocation* _presentedItemLocation;

}

@property (copy,readonly) NSURL * presentedItemURL;                                      //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * presentedItemLocation;               //@synthesize presentedItemLocation=_presentedItemLocation - In the implementation block
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(id)init;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(id)initWithMetadataStoreFileLocation:(id)arg1 ;
-(void)relinquishPresentedItemToReader:(/*^block*/id)arg1 ;
-(PFUbiquityLocation *)presentedItemLocation;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)savePresentedItemChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

