/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>

@class PXAssetsDataSourceManager, NSString;

@interface PUPXAssetsDataSourceManager : PUAssetsDataSourceManager <PXAssetsDataSourceManagerObserver> {

	PXAssetsDataSourceManager* _underlyingDataSourceManager;
	long long __currentUpdateID;

}

@property (assign,setter=_setCurrentUpdateId:,nonatomic) long long _currentUpdateID;                 //@synthesize _currentUpdateID=__currentUpdateID - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSourceManager * underlyingDataSourceManager;              //@synthesize underlyingDataSourceManager=_underlyingDataSourceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)photosDataSource;
-(id)init;
-(id)initWithUnderlyingDataSourceManager:(id)arg1 ;
-(void)_handleScheduledUpdateWithID:(long long)arg1 ;
-(long long)_currentUpdateID;
-(void)_setCurrentUpdateId:(long long)arg1 ;
-(PXAssetsDataSourceManager *)underlyingDataSourceManager;
-(void)_update;
-(void)_scheduleUpdate;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

