/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@protocol OS_dispatch_queue;
@class IMLibraryPlist, NSObject;

@interface BLLibrary : NSObject {

	IMLibraryPlist* _booksPlist;
	IMLibraryPlist* _purchasedPlist;
	IMLibraryPlist* _managedPlist;
	IMLibraryPlist* _sharedPlist;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) IMLibraryPlist * booksPlist;                             //@synthesize booksPlist=_booksPlist - In the implementation block
@property (nonatomic,retain) IMLibraryPlist * purchasedPlist;                         //@synthesize purchasedPlist=_purchasedPlist - In the implementation block
@property (nonatomic,retain) IMLibraryPlist * managedPlist;                           //@synthesize managedPlist=_managedPlist - In the implementation block
@property (nonatomic,retain) IMLibraryPlist * sharedPlist;                            //@synthesize sharedPlist=_sharedPlist - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
+(void)initialize;
+(id)_bookItemsFromPlist:(id)arg1 sharedPlist:(id)arg2 ;
+(BOOL)_addDate:(id)arg1 toPlist:(id)arg2 bookItem:(id)arg3 error:(id*)arg4 ;
+(id)defaultBookLibrary;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(IMLibraryPlist *)booksPlist;
-(id)_initWithBooksPlist:(id)arg1 purchasedPlist:(id)arg2 managedPlist:(id)arg3 sharedPlist:(id)arg4 ;
-(IMLibraryPlist *)sharedPlist;
-(id)_allPlists;
-(IMLibraryPlist *)purchasedPlist;
-(id)_bookItemsFromPlist:(id)arg1 ;
-(IMLibraryPlist *)managedPlist;
-(id)_list:(id)arg1 testBlock:(/*^block*/id)arg2 ;
-(BOOL)_isMultiUser;
-(BOOL)_addSharedBookToPurchasesPlistWithPermlink:(id)arg1 error:(id*)arg2 ;
-(void)_downloadWithPermalink:(id)arg1 title:(id)arg2 result:(/*^block*/id)arg3 ;
-(id)_bookItemFromPermlink:(id)arg1 error:(id*)arg2 ;
-(id)_findBookItemWithTestBlock:(/*^block*/id)arg1 foundWhere:(long long*)arg2 ;
-(id)allBookItems;
-(id)_bookItemFromStoreID:(id)arg1 permlink:(id)arg2 error:(id*)arg3 ;
-(BOOL)_bookItemIsShared:(id)arg1 ;
-(void)addITunesUBookToLibraryWithPermlink:(id)arg1 title:(id)arg2 result:(/*^block*/id)arg3 ;
-(id)_lookupBookItemExhaustiveFromPermlink:(id)arg1 error:(id*)arg2 ;
-(BOOL)_addBookItemToEduContainer:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeBookFromLibraryWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)_removeBookFromLibraryWithPath:(id)arg1 error:(id*)arg2 ;
-(id)bookIdentifierFromURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_isShareableBook:(id)arg1 ;
-(id)_perUserBookURLForBookURL:(id)arg1 ;
-(void)_bookWasOpenedWithStoreID:(id)arg1 permlink:(id)arg2 date:(id)arg3 ;
-(void)setBooksPlist:(IMLibraryPlist *)arg1 ;
-(void)setPurchasedPlist:(IMLibraryPlist *)arg1 ;
-(void)setManagedPlist:(IMLibraryPlist *)arg1 ;
-(void)setSharedPlist:(IMLibraryPlist *)arg1 ;
-(id)_init;
@end
