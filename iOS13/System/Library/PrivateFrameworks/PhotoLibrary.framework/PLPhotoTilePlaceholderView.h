/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PLTilePlaceholderView.h>

@class UIActivityIndicatorView, UILabel, UIView, NSString;

@interface PLPhotoTilePlaceholderView : UIView <PLTilePlaceholderView> {

	UIActivityIndicatorView* _loadingIndicatorView;
	UILabel* _loadingLabel;
	UIView* _loadingContainerView;
	double _lastViewPhaseChangeDate;
	BOOL _indicatorIsVisible;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImageRect:(CGRect)arg1 ;
-(void)showLoadingIndicator;
-(void)fadeOutSoonIfNeededAndRemoveFromSuperview:(BOOL)arg1 ;
-(void)showLoadingIndicatorWhenReady;
-(void)showErrorIndicator;
-(void)updateCloudDownloadProgress:(double)arg1 ;
-(void)setToolbarVisible:(BOOL)arg1 ;
@end

