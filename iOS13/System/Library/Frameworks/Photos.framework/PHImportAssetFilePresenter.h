/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSSet, NSString;

@interface PHImportAssetFilePresenter : NSObject <NSFilePresenter> {

	NSURL* _presentedItemURL;
	NSURL* _primaryPresentedItemURL;
	NSOperationQueue* _presentedItemOperationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL;                                      //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue;              //@synthesize presentedItemOperationQueue=_presentedItemOperationQueue - In the implementation block
@property (copy,readonly) NSURL * primaryPresentedItemURL;                               //@synthesize primaryPresentedItemURL=_primaryPresentedItemURL - In the implementation block
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(NSURL *)primaryPresentedItemURL;
-(id)initWithPrimaryURL:(id)arg1 presentedURL:(id)arg2 ;
@end

