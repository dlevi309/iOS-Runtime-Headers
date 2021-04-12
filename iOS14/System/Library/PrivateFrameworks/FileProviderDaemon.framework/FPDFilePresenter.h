/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <libobjc.A.dylib/FPXEnumeratorObserver.h>
#import <libobjc.A.dylib/FPDLifetimeExtender.h>

@protocol FPXEnumerator, OS_dispatch_queue;
@class FPDExtensionManager, NSObject, FPDDomain, NSData, FPItemID, FPItem, NSURL, NSString;

@interface FPDFilePresenter : NSObject <FPXEnumeratorObserver, FPDLifetimeExtender> {

	FPDExtensionManager* _manager;
	id<FPXEnumerator> _enumerator;
	NSObject*<OS_dispatch_queue> _queue;
	FPDDomain* _domain;
	NSData* _changeToken;
	FPItemID* _observedItemID;
	FPItem* _currentItem;
	BOOL _isFetchingChanges;
	BOOL _shouldRefetchChanges;
	BOOL _presenterWantsUbiqitousAttributes;
	BOOL _isEnumeratorActive;
	BOOL _isFrontmost;
	int _requestEffectivePID;
	int _presenterPid;
	id _filePresenterID;
	FPItemID* _itemID;
	NSURL* _presentedItemURL;

}

@property (nonatomic,retain) FPItemID * itemID;                        //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) id filePresenterID;                         //@synthesize filePresenterID=_filePresenterID - In the implementation block
@property (assign,nonatomic) int presenterPid;                         //@synthesize presenterPid=_presenterPid - In the implementation block
@property (assign,nonatomic) BOOL isEnumeratorActive;                  //@synthesize isEnumeratorActive=_isEnumeratorActive - In the implementation block
@property (assign,nonatomic) BOOL isFrontmost;                         //@synthesize isFrontmost=_isFrontmost - In the implementation block
@property (nonatomic,readonly) NSURL * presentedItemURL;               //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (nonatomic,retain) FPDDomain * domain;                       //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) FPItemID * observedItemID;              //@synthesize observedItemID=_observedItemID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int requestEffectivePID;                          //@synthesize requestEffectivePID=_requestEffectivePID - In the implementation block
@property (readonly) NSString * prettyDescription; 
+(id)presenter:(id)arg1 withItemID:(id)arg2 pid:(int)arg3 urlHint:(id)arg4 domain:(id)arg5 ;
-(NSURL *)presentedItemURL;
-(void)setItemID:(FPItemID *)arg1 ;
-(FPItemID *)observedItemID;
-(void)enumerationResultsDidChange;
-(NSString *)prettyDescription;
-(void)start;
-(void)setDomain:(FPDDomain *)arg1 ;
-(void)stop;
-(FPDDomain *)domain;
-(id)enumerator;
-(NSString *)description;
-(FPItemID *)itemID;
-(void)dumpStateTo:(id)arg1 ;
-(void)didUpdateItem:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(int)requestEffectivePID;
-(id)initWithIdentifier:(id)arg1 itemID:(id)arg2 pid:(int)arg3 urlHint:(id)arg4 domain:(id)arg5 ;
-(id)filePresenterID;
-(id)_presentedItemDescription:(BOOL)arg1 ;
-(void)setIsEnumeratorActive:(BOOL)arg1 ;
-(void)_fetchChangeToken;
-(void)_destroyEnumerator;
-(id)_newCoordinator;
-(void)_fetchUpdates;
-(void)receiveUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 ;
-(void)_enumeratorRequestDidFailWithXPCError:(id)arg1 section:(unsigned long long)arg2 ;
-(BOOL)isEnumeratorActive;
-(void)becomeFrontmost:(BOOL)arg1 inWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setFilePresenterID:(id)arg1 ;
-(int)presenterPid;
-(void)setPresenterPid:(int)arg1 ;
-(BOOL)isFrontmost;
-(void)setIsFrontmost:(BOOL)arg1 ;
@end

