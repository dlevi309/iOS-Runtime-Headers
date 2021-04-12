/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXUIRelatedPlaceholderTile.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class PXPhotoAnalysisStatusController, UIActivityIndicatorView, UILabel, NSString;

@interface PXUIRelatedActivityIndicatorTile : PXUIRelatedPlaceholderTile <PXChangeObserver> {

	BOOL _animating;
	PXPhotoAnalysisStatusController* _statusController;
	UIActivityIndicatorView* __activityIndicatorView;
	UILabel* __label;

}

@property (nonatomic,readonly) UIActivityIndicatorView * _activityIndicatorView;              //@synthesize _activityIndicatorView=__activityIndicatorView - In the implementation block
@property (nonatomic,readonly) UILabel * _label;                                              //@synthesize _label=__label - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                               //@synthesize animating=_animating - In the implementation block
@property (nonatomic,retain) PXPhotoAnalysisStatusController * statusController;              //@synthesize statusController=_statusController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)_label;
-(void)becomeReusable;
-(void)setAnimating:(BOOL)arg1 ;
-(id)init;
-(void)_updateLabelText;
-(UIActivityIndicatorView *)_activityIndicatorView;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(PXPhotoAnalysisStatusController *)statusController;
-(void)setStatusController:(PXPhotoAnalysisStatusController *)arg1 ;
-(BOOL)isAnimating;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

