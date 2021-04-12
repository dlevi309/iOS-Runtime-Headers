/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaEntitiesDataSource.h>
#import <libobjc.A.dylib/VUIMediaEntitiesFetchControllerDelegate.h>

@class VUIMediaLibrary, VUIMediaEntitiesFetchController, NSString;

@interface VUIMPMediaEntitiesDataSource : VUIMediaEntitiesDataSource <VUIMediaEntitiesFetchControllerDelegate> {

	VUIMediaLibrary* _mediaLibrary;
	VUIMediaEntitiesFetchController* _fetchController;

}

@property (nonatomic,retain) VUIMediaLibrary * mediaLibrary;                                 //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) VUIMediaEntitiesFetchController * fetchController;              //@synthesize fetchController=_fetchController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VUIMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(VUIMediaLibrary *)arg1 ;
-(VUIMediaEntitiesFetchController *)fetchController;
-(id)initWithMediaLibrary:(id)arg1 fetchRequest:(id)arg2 ;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3 ;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3 ;
-(void)startFetch;
-(void)setFetchController:(VUIMediaEntitiesFetchController *)arg1 ;
-(id)_getPurchaseHistoryIdsFromMediaEntities:(id)arg1 ;
-(void)_loadImageUrlsByPurchaseHistoryIds:(id)arg1 ;
@end

