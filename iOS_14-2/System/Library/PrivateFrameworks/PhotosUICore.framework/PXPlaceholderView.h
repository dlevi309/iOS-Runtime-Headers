/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@class UIActivityIndicatorView, UIView, NSString;

@interface PXPlaceholderView : UIView <PXReusableObject, PXUIViewBasicTile> {

	UIActivityIndicatorView* _indicator;
	BOOL _shouldShowIndicatorView;

}

@property (assign,nonatomic) BOOL shouldShowIndicatorView;              //@synthesize shouldShowIndicatorView=_shouldShowIndicatorView - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)becomeReusable;
-(void)prepareForReuse;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)layoutSubviews;
-(UIView *)view;
-(void)setShouldShowIndicatorView:(BOOL)arg1 ;
-(BOOL)shouldShowIndicatorView;
-(void)_updateSubviews;
@end

