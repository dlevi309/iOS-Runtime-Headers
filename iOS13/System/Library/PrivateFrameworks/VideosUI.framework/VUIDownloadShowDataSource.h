/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaEntitiesDataSource.h>
#import <libobjc.A.dylib/VUIMediaEntitiesFetchControllerDelegate.h>

@class VUIMediaEntity, VUIMediaEntitiesFetchController, NSString;

@interface VUIDownloadShowDataSource : VUIMediaEntitiesDataSource <VUIMediaEntitiesFetchControllerDelegate> {

	VUIMediaEntity* _showEntity;
	VUIMediaEntitiesFetchController* _fetchController;

}

@property (nonatomic,retain) VUIMediaEntitiesFetchController * fetchController;              //@synthesize fetchController=_fetchController - In the implementation block
@property (nonatomic,retain) VUIMediaEntity * showEntity;                                    //@synthesize showEntity=_showEntity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VUIMediaEntitiesFetchController *)fetchController;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3 ;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3 ;
-(void)startFetch;
-(void)setFetchController:(VUIMediaEntitiesFetchController *)arg1 ;
-(id)initWithMediaEntity:(id)arg1 ;
-(id)fetchRequestForMediaEntity:(id)arg1 ;
-(VUIMediaEntity *)showEntity;
-(void)setShowEntity:(VUIMediaEntity *)arg1 ;
@end

