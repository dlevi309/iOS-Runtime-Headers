/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPContainerObserver.h>
#import <libobjc.A.dylib/MSPQueryDelegate.h>

@protocol MSPQueryDelegate, OS_dispatch_queue;
@class MSPContainer, NSArray, NSLock, NSObject, NSString;

@interface NewMSPQuery : NSObject <MSPContainerObserver, MSPQueryDelegate> {

	unsigned long long _contentVersion;
	BOOL _isReady;
	MSPContainer* _container;
	NSArray* _cachedContents;
	/*^block*/id _filterBlock;
	NewMSPQuery* _parentQuery;
	NSLock* _lock;
	id<MSPQueryDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _processingQueue;

}

@property (nonatomic,retain) NSArray * cachedContents;                                  //@synthesize cachedContents=_cachedContents - In the implementation block
@property (nonatomic,copy) id filterBlock;                                              //@synthesize filterBlock=_filterBlock - In the implementation block
@property (nonatomic,retain) NewMSPQuery * parentQuery;                                 //@synthesize parentQuery=_parentQuery - In the implementation block
@property (nonatomic,retain) NSLock * lock;                                             //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic,__weak) id<MSPQueryDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;              //@synthesize processingQueue=_processingQueue - In the implementation block
@property (assign) BOOL isReady;                                                        //@synthesize isReady=_isReady - In the implementation block
@property (nonatomic,readonly) MSPContainer * container;                                //@synthesize container=_container - In the implementation block
@property (readonly) NSArray * contents; 
@property (readonly) unsigned long long contentVersion;                                 //@synthesize contentVersion=_contentVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MSPContainer *)container;
-(id<MSPQueryDelegate>)delegate;
-(void)setDelegate:(id<MSPQueryDelegate>)arg1 ;
-(NSLock *)lock;
-(NSArray *)contents;
-(BOOL)isReady;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)filterBlock;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLock:(NSLock *)arg1 ;
-(void)setIsReady:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(unsigned long long)contentVersion;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_notifyDelegate:(/*^block*/id)arg1 ;
-(void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5 ;
-(void)containerDidEraseContents:(id)arg1 fromStorageTypes:(unsigned long long)arg2 ;
-(id)initWithContainer:(id)arg1 delegate:(id)arg2 filteredWithBlock:(/*^block*/id)arg3 ;
-(id)initWithParentQuery:(id)arg1 container:(id)arg2 delegate:(id)arg3 filteredWithBlock:(/*^block*/id)arg4 ;
-(void)processContents;
-(void)processContentsWithCompletion:(/*^block*/id)arg1 ;
-(void)setCachedContents:(NSArray *)arg1 ;
-(void)processContentsUsingBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(NewMSPQuery *)parentQuery;
-(void)queryContentsDidLoad:(id)arg1 contentsVersion:(unsigned long long)arg2 ;
-(void)queryContentsDidChange:(id)arg1 contentsVersion:(unsigned long long)arg2 ;
-(void)addOrUpdateObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isObject:(id)arg1 equalTo:(id)arg2 ;
-(void)removeObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)moveObject:(id)arg1 toIndex:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithContainer:(id)arg1 delegate:(id)arg2 ;
-(id)subQueryFilteredWithBlock:(/*^block*/id)arg1 ;
-(void)fetchContentsWithHandler:(/*^block*/id)arg1 ;
-(void)setContents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addOrUpdateObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)moveObject:(id)arg1 beforeObject:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)moveObject:(id)arg1 afterObject:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)moveObjectToFront:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)moveObjectToBack:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)cachedContents;
-(void)setFilterBlock:(id)arg1 ;
-(void)setParentQuery:(NewMSPQuery *)arg1 ;
@end

