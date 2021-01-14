/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXPhotosDetailsLoadCoordinator;

@interface PXPhotosDetailsLoadCoordinationToken : NSObject {

	BOOL _didComplete;
	PXPhotosDetailsLoadCoordinator* __loadCoordinator;

}

@property (nonatomic,__weak,readonly) PXPhotosDetailsLoadCoordinator * _loadCoordinator;              //@synthesize _loadCoordinator=__loadCoordinator - In the implementation block
-(id)init;
-(id)_initWithLoadCoordinator:(id)arg1 ;
-(PXPhotosDetailsLoadCoordinator *)_loadCoordinator;
-(void)complete;
-(void)_timeout;
-(void)dealloc;
@end

