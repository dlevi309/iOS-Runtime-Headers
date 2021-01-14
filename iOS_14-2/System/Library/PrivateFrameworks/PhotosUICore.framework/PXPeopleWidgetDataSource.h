/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXPeopleDataSource.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, PXPeopleDetailsContext, NSArray, NSString;

@interface PXPeopleWidgetDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver> {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	BOOL _containsSocialGroups;
	BOOL _isForOneUp;
	BOOL _prefetchingStarted;
	PXPeopleDetailsContext* _context;

}

@property (assign,nonatomic) BOOL prefetchingStarted;                       //@synthesize prefetchingStarted=_prefetchingStarted - In the implementation block
@property (assign,nonatomic) BOOL containsSocialGroups;                     //@synthesize containsSocialGroups=_containsSocialGroups - In the implementation block
@property (nonatomic,readonly) NSArray * members; 
@property (nonatomic,retain) PXPeopleDetailsContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL isForOneUp;                               //@synthesize isForOneUp=_isForOneUp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startListeningForChanges;
-(id)titleAtIndex:(unsigned long long)arg1 ;
-(PXPeopleDetailsContext *)context;
-(void)imageCacheDidChanged:(id)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)_updateMembers;
-(id)initWithName:(id)arg1 objectsReloadBlock:(/*^block*/id)arg2 ;
-(void)prefetchThumbnailsForTargetSize:(CGSize)arg1 maxFetchCount:(unsigned long long)arg2 ;
-(BOOL)prefetchingStarted;
-(void)setPrefetchingStarted:(BOOL)arg1 ;
-(void)loadMembersWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_socialGroupsForIdentifiers:(id)arg1 ;
-(BOOL)containsSocialGroups;
-(void)setContainsSocialGroups:(BOOL)arg1 ;
-(BOOL)isForOneUp;
-(void)setIsForOneUp:(BOOL)arg1 ;
-(void)stopListeningForChanges;
-(void)dealloc;
-(void)setContext:(PXPeopleDetailsContext *)arg1 ;
@end

