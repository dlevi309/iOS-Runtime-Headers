/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSSet, NSMutableArray, NSArray, NSString;

@interface WCContentIndex : NSObject <NSFilePresenter> {

	BOOL _invalidated;
	NSURL* _itemURL;
	NSOperationQueue* _operationQueue;
	NSMutableArray* _cachedContentIndex;
	id _lastGenerationIdentifier;

}

@property (assign,nonatomic) BOOL invalidated;                                           //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,retain) NSURL * itemURL;                                            //@synthesize itemURL=_itemURL - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                          //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedContentIndex;                        //@synthesize cachedContentIndex=_cachedContentIndex - In the implementation block
@property (nonatomic,retain) id lastGenerationIdentifier;                                //@synthesize lastGenerationIdentifier=_lastGenerationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * index; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)invalidate;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSArray *)index;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)presentedItemDidChange;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)commit;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(NSURL *)itemURL;
-(void)setItemURL:(NSURL *)arg1 ;
-(void)loadContentIfNecessary;
-(id)lastGenerationIdentifier;
-(void)setCachedContentIndex:(NSMutableArray *)arg1 ;
-(void)setLastGenerationIdentifier:(id)arg1 ;
-(NSMutableArray *)cachedContentIndex;
-(id)initWithContainingFolder:(id)arg1 ;
-(void)addContentIdentifier:(id)arg1 ;
-(void)removeContentIdentifier:(id)arg1 ;
@end

