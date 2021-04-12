/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PUActivityItemSourceOperationDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <UIKit/UIActivityItemsSource.h>
#import <UIKit/UIActivityItemDeferredSource.h>
#import <UIKit/UIActivityItemSource.h>

@protocol PUCMMActivityItemSourceDelegate, OS_dispatch_queue;
@class PUActivityItemSourceController, NSString, PUActivityItemSourceOperation, NSURL, NSArray, NSError, NSObject;

@interface PUCMMActivityItemSource : PXObservable <PUActivityItemSourceOperationDelegate, PXChangeObserver, UIActivityItemsSource, UIActivityItemDeferredSource, UIActivityItemSource> {

	PUActivityItemSourceController* _itemSourceController;
	id<PUCMMActivityItemSourceDelegate> _delegate;
	unsigned long long _state;
	NSString* _activityType;
	PUActivityItemSourceOperation* _preparationOperation;
	NSURL* _momentShareLink;
	NSArray* _individuallyPreparedItems;
	NSError* _preparationError;
	NSObject*<OS_dispatch_queue> _externalIsolationQueue;

}

@property (nonatomic,retain) NSString * activityType;                                                     //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,retain) PUActivityItemSourceOperation * preparationOperation;                        //@synthesize preparationOperation=_preparationOperation - In the implementation block
@property (nonatomic,copy) NSURL * momentShareLink;                                                       //@synthesize momentShareLink=_momentShareLink - In the implementation block
@property (nonatomic,copy) NSArray * individuallyPreparedItems;                                           //@synthesize individuallyPreparedItems=_individuallyPreparedItems - In the implementation block
@property (nonatomic,retain) NSError * preparationError;                                                  //@synthesize preparationError=_preparationError - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> externalIsolationQueue;                         //@synthesize externalIsolationQueue=_externalIsolationQueue - In the implementation block
@property (nonatomic,__weak,readonly) PUActivityItemSourceController * itemSourceController;              //@synthesize itemSourceController=_itemSourceController - In the implementation block
@property (assign,nonatomic,__weak) id<PUCMMActivityItemSourceDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                                  //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setActivityType:(NSString *)arg1 ;
-(NSString *)activityType;
-(id<PUCMMActivityItemSourceDelegate>)delegate;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(void)setDelegate:(id<PUCMMActivityItemSourceDelegate>)arg1 ;
-(id)preparedItems;
-(id)placeholderItemsForActivityViewController:(id)arg1 ;
-(PUActivityItemSourceOperation *)preparationOperation;
-(void)setPreparationOperation:(PUActivityItemSourceOperation *)arg1 ;
-(NSURL *)momentShareLink;
-(void)setMomentShareLink:(NSURL *)arg1 ;
-(NSArray *)individuallyPreparedItems;
-(void)setIndividuallyPreparedItems:(NSArray *)arg1 ;
-(NSError *)preparationError;
-(void)setPreparationError:(NSError *)arg1 ;
-(NSObject*<OS_dispatch_queue>)externalIsolationQueue;
-(void)setExternalIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(PUActivityItemSourceController *)itemSourceController;
-(void)activityItemSourceOperation:(id)arg1 prepareItemForActivityType:(id)arg2 ;
-(id)initWithActivityItemSourceController:(id)arg1 ;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(void)cancel;
-(id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2 ;
-(id)activityViewControllerOperation:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

