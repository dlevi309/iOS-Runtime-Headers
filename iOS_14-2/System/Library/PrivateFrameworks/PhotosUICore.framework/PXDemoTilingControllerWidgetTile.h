/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@class UIView, NSString;

@interface PXDemoTilingControllerWidgetTile : NSObject <PXUIViewBasicTile> {

	UIView* __mapView;

}

@property (nonatomic,readonly) UIView * _mapView;                   //@synthesize _mapView=__mapView - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIView *)_mapView;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(UIView *)view;
@end

