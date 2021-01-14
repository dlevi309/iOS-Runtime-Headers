/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXDragAndDropSettings : PXSettings {

	BOOL _useData;
	BOOL _dragOutEnabled;
	BOOL _alwaysAllowDragsWithinUserAlbums;
	BOOL _springLoadingEnabled;
	BOOL _useFileProvider;
	long long _reorderCadence;
	double _dropGestureSpeedLimit;

}

@property (assign,nonatomic) BOOL useData;                                       //@synthesize useData=_useData - In the implementation block
@property (assign,nonatomic) BOOL dragOutEnabled;                                //@synthesize dragOutEnabled=_dragOutEnabled - In the implementation block
@property (assign,nonatomic) BOOL alwaysAllowDragsWithinUserAlbums;              //@synthesize alwaysAllowDragsWithinUserAlbums=_alwaysAllowDragsWithinUserAlbums - In the implementation block
@property (assign,nonatomic) BOOL springLoadingEnabled;                          //@synthesize springLoadingEnabled=_springLoadingEnabled - In the implementation block
@property (assign,nonatomic) BOOL useFileProvider;                               //@synthesize useFileProvider=_useFileProvider - In the implementation block
@property (assign,nonatomic) long long reorderCadence;                           //@synthesize reorderCadence=_reorderCadence - In the implementation block
@property (assign,nonatomic) double dropGestureSpeedLimit;                       //@synthesize dropGestureSpeedLimit=_dropGestureSpeedLimit - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setUseFileProvider:(BOOL)arg1 ;
-(BOOL)alwaysAllowDragsWithinUserAlbums;
-(double)dropGestureSpeedLimit;
-(void)setAlwaysAllowDragsWithinUserAlbums:(BOOL)arg1 ;
-(void)setSpringLoadingEnabled:(BOOL)arg1 ;
-(long long)reorderCadence;
-(BOOL)springLoadingEnabled;
-(void)setDropGestureSpeedLimit:(double)arg1 ;
-(void)setUseData:(BOOL)arg1 ;
-(BOOL)useData;
-(BOOL)dragOutEnabled;
-(BOOL)useFileProvider;
-(void)setDragOutEnabled:(BOOL)arg1 ;
-(void)setReorderCadence:(long long)arg1 ;
@end

