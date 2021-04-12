/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXPeopleDataSourceDelegate, OS_dispatch_queue;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSString, NSPredicate, NSArray, NSObject, PHFetchResult;

@interface PXPeopleDataSource : NSObject {

	BOOL _disclosed;
	BOOL _useAsynchronousLoad;
	NSString* _name;
	unsigned long long _maximumNumberOfMembers;
	id<PXPeopleDataSourceDelegate> _delegate;
	NSString* _localizedDisclosedTitle;
	NSString* _localizedUndisclosedTitle;
	NSPredicate* _filterPredicate;
	/*^block*/id _sortComparator;
	NSArray* _members;
	NSObject*<OS_dispatch_queue> _reloadQueue;
	PHFetchResult* _objects;
	/*^block*/id _reloadBlock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reloadQueue;                    //@synthesize reloadQueue=_reloadQueue - In the implementation block
@property (nonatomic,readonly) BOOL useAsynchronousLoad;                                  //@synthesize useAsynchronousLoad=_useAsynchronousLoad - In the implementation block
@property (nonatomic,retain) PHFetchResult * objects;                                     //@synthesize objects=_objects - In the implementation block
@property (nonatomic,copy) id reloadBlock;                                                //@synthesize reloadBlock=_reloadBlock - In the implementation block
@property (nonatomic,copy) NSArray * members;                                             //@synthesize members=_members - In the implementation block
@property (nonatomic,copy) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfMembers; 
@property (assign,nonatomic) unsigned long long maximumNumberOfMembers;                   //@synthesize maximumNumberOfMembers=_maximumNumberOfMembers - In the implementation block
@property (assign,nonatomic,__weak) id<PXPeopleDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSString * localizedDisclosedTitle;                                      //@synthesize localizedDisclosedTitle=_localizedDisclosedTitle - In the implementation block
@property (copy) NSString * localizedUndisclosedTitle;                                    //@synthesize localizedUndisclosedTitle=_localizedUndisclosedTitle - In the implementation block
@property (getter=isDisclosed) BOOL disclosed;                                            //@synthesize disclosed=_disclosed - In the implementation block
@property (nonatomic,copy) NSPredicate * filterPredicate;                                 //@synthesize filterPredicate=_filterPredicate - In the implementation block
@property (nonatomic,copy) id sortComparator;                                             //@synthesize sortComparator=_sortComparator - In the implementation block
@property (nonatomic,readonly) NSArray * persons; 
-(PHFetchResult *)objects;
-(void)setObjects:(PHFetchResult *)arg1 ;
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)filterPredicate;
-(id)localizedTitle;
-(void)startListeningForChanges;
-(id)titleAtIndex:(unsigned long long)arg1 ;
-(void)loadObjectsAndUpdateMembersWithCompletion:(/*^block*/id)arg1 ;
-(id<PXPeopleDataSourceDelegate>)delegate;
-(NSArray *)persons;
-(void)setDisclosed:(BOOL)arg1 ;
-(NSArray *)members;
-(NSString *)name;
-(void)setDelegate:(id<PXPeopleDataSourceDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)reloadQueue;
-(void)setReloadQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)reloadBlock;
-(id)initWithName:(id)arg1 objectsReloadBlock:(/*^block*/id)arg2 asynchronousLoad:(BOOL)arg3 callbackDelegate:(id)arg4 ;
-(id)initWithName:(id)arg1 objects:(id)arg2 ;
-(unsigned long long)numberOfMembers;
-(id)memberAtIndex:(unsigned long long)arg1 ;
-(id)personAtIndex:(unsigned long long)arg1 ;
-(void)imageAtIndex:(unsigned long long)arg1 targetSize:(CGSize)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)imageAtIndex:(unsigned long long)arg1 targetSize:(CGSize)arg2 withCompletionBlock:(/*^block*/id)arg3 fastDisplayBlock:(/*^block*/id)arg4 ;
-(unsigned long long)photoQuantityAtIndex:(unsigned long long)arg1 ;
-(/*^block*/id)defaultComparator;
-(void)setReloadBlock:(id)arg1 ;
-(void)_setObjectsWithoutUpdate:(id)arg1 ;
-(void)_updateMembers;
-(unsigned long long)maximumNumberOfMembers;
-(void)setMaximumNumberOfMembers:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 objectsReloadBlock:(/*^block*/id)arg2 ;
-(void)setMembers:(NSArray *)arg1 ;
-(NSString *)localizedDisclosedTitle;
-(void)setLocalizedDisclosedTitle:(NSString *)arg1 ;
-(NSString *)localizedUndisclosedTitle;
-(void)setLocalizedUndisclosedTitle:(NSString *)arg1 ;
-(BOOL)useAsynchronousLoad;
-(void)_asyncLoadImageForItem:(id)arg1 targetSize:(CGSize)arg2 withCompletionBlock:(/*^block*/id)arg3 fastDisplayBlock:(/*^block*/id)arg4 ;
-(void)stopListeningForChanges;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isDisclosed;
-(id)sortComparator;
-(void)setSortComparator:(id)arg1 ;
-(id)_itemsArrayFromObjects:(id)arg1 ;
-(void)dealloc;
@end

