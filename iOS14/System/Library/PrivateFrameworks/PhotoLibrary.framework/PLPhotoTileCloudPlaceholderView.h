/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PLTilePlaceholderView.h>

@protocol PLPhotoTileCloudPlaceholderViewDelegate;
@class PLRoundProgressView, UIView, UIButton, NSString;

@interface PLPhotoTileCloudPlaceholderView : UIView <PLTilePlaceholderView> {

	PLRoundProgressView* _loadingIndicatorView;
	UIView* _loadingContainerView;
	UIButton* _loadingErrorButton;
	BOOL _indicatorIsVisible;
	BOOL _showingError;
	BOOL _showingLoading;
	CGRect _imageRect;
	BOOL _toolbarVisible;
	double _lastViewPhaseChangeDate;
	id<PLPhotoTileCloudPlaceholderViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)showLoadingIndicator;
-(void)layoutSubviews;
-(void)setImageRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)fadeOutSoonIfNeededAndRemoveFromSuperview:(BOOL)arg1 ;
-(void)showLoadingIndicatorWhenReady;
-(void)showErrorIndicator;
-(void)updateCloudDownloadProgress:(double)arg1 ;
-(void)setToolbarVisible:(BOOL)arg1 ;
-(void)setRetryDelegate:(id)arg1 ;
-(void)_retryDownload;
@end

