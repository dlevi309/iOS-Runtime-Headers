/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@class UIView, PXViewSpec, NSString;

@interface PXUIGenericViewTile : NSObject <PXUIViewBasicTile> {

	UIView* _view;
	PXViewSpec* __spec;

}

@property (setter=_setSpec:,nonatomic,retain) PXViewSpec * _spec;              //@synthesize _spec=__spec - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)becomeReusable;
-(PXViewSpec *)_spec;
-(void)prepareForReuse;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)_setSpec:(id)arg1 ;
-(UIView *)view;
@end

