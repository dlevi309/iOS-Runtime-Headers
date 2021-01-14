/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXPeopleDataSource.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface PXSharingSuggestionDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver> {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	BOOL _prefetchingStarted;

}

@property (assign,nonatomic) BOOL prefetchingStarted;               //@synthesize prefetchingStarted=_prefetchingStarted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startListeningForChanges;
-(id)titleAtIndex:(unsigned long long)arg1 ;
-(void)imageCacheDidChanged:(id)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(id)initWithName:(id)arg1 objectsReloadBlock:(/*^block*/id)arg2 ;
-(void)prefetchThumbnailsForTargetSize:(CGSize)arg1 maxFetchCount:(unsigned long long)arg2 ;
-(void)setMembers:(id)arg1 ;
-(BOOL)prefetchingStarted;
-(void)setPrefetchingStarted:(BOOL)arg1 ;
-(void)stopListeningForChanges;
-(void)dealloc;
@end

