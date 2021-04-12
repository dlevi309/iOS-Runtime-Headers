/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>
#import <libobjc.A.dylib/PXReusableObject.h>

@class PXImageViewSpec, PXImageUIView, UIView, NSString;

@interface PXUIStaticImageTile : NSObject <PXUIViewBasicTile, PXReusableObject> {

	PXImageViewSpec* _spec;
	PXImageUIView* _imageView;

}

@property (nonatomic,retain) PXImageViewSpec * spec;                   //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) PXImageUIView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)becomeReusable;
-(void)setSpec:(PXImageViewSpec *)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(PXImageUIView *)imageView;
-(void)prepareForReuse;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(PXImageViewSpec *)spec;
-(UIView *)view;
@end

