/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSSet, NSString;

@interface PHImportAssetFilePresenter : NSObject <NSFilePresenter> {

	NSURL* _presentedItemURL;
	NSURL* _primaryPresentedItemURL;
	NSOperationQueue* _presentedItemOperationQueue;

}

@property (copy,readonly) NSURL * presentedItemURL;                                      //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue;              //@synthesize presentedItemOperationQueue=_presentedItemOperationQueue - In the implementation block
@property (copy,readonly) NSURL * primaryPresentedItemURL;                               //@synthesize primaryPresentedItemURL=_primaryPresentedItemURL - In the implementation block
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(NSURL *)primaryPresentedItemURL;
-(id)initWithPrimaryURL:(id)arg1 presentedURL:(id)arg2 ;
@end

