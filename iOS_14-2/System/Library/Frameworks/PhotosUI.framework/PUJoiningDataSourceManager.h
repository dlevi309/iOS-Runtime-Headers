/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PUAssetsDataSourceManagerDelegate.h>

@class NSArray, NSString;

@interface PUJoiningDataSourceManager : PUAssetsDataSourceManager <PUAssetsDataSourceManagerDelegate> {

	NSArray* __dataSourceManagers;
	long long __currentUpdateID;

}

@property (nonatomic,readonly) NSArray * _dataSourceManagers;                                     //@synthesize _dataSourceManagers=__dataSourceManagers - In the implementation block
@property (assign,setter=_setCurrentUpdateId:,nonatomic) long long _currentUpdateID;              //@synthesize _currentUpdateID=__currentUpdateID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataSourceManagers:(id)arg1 ;
-(void)_handleScheduledUpdateWithID:(long long)arg1 ;
-(NSArray *)_dataSourceManagers;
-(long long)_currentUpdateID;
-(void)_setCurrentUpdateId:(long long)arg1 ;
-(void)_update;
-(void)_scheduleUpdate;
-(void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2 ;
-(id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1 ;
@end

