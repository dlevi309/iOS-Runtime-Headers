/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol MKMuninContainerViewDelegate, NSObject;
@class UIColor, MKMapItem, MKMuninContainerBadgeView, UIActivityIndicatorView, UIView;

@interface MKMuninContainerView : UIView {

	UIColor* _dimmingViewBackgroundColorBlackOpaque;
	UIColor* _dimmingViewBackgroundColorBlackTranslucent;
	UIColor* _dimmingViewBackgroundColorClear;
	UIColor* _dimmingViewBackgroundColorPhotosOpaque;
	BOOL _photosDimmingStyle;
	BOOL _pipDimmingStyle;
	id<MKMuninContainerViewDelegate> _delegate;
	MKMapItem* _mapItem;
	unsigned long long _dimmingState;
	MKMuninContainerBadgeView* _badgeView;
	UIActivityIndicatorView* _activityIndicator;
	UIView* _dimmingView;
	id<NSObject> _muninViewDidBecomeAdequatelyDrawnObserver;

}

@property (nonatomic,readonly) UIColor * dimmingViewBackgroundColorBlackOpaque; 
@property (nonatomic,readonly) UIColor * dimmingViewBackgroundColorBlackTranslucent; 
@property (nonatomic,readonly) UIColor * dimmingViewBackgroundColorClear; 
@property (nonatomic,readonly) UIColor * dimmingViewBackgroundColorPhotosOpaque; 
@property (assign,nonatomic) BOOL photosDimmingStyle;                                             //@synthesize photosDimmingStyle=_photosDimmingStyle - In the implementation block
@property (assign,nonatomic) BOOL pipDimmingStyle;                                                //@synthesize pipDimmingStyle=_pipDimmingStyle - In the implementation block
@property (nonatomic,retain) MKMuninContainerBadgeView * badgeView;                               //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                         //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                                                //@synthesize dimmingView=_dimmingView - In the implementation block
@property (nonatomic,retain) id<NSObject> muninViewDidBecomeAdequatelyDrawnObserver;              //@synthesize muninViewDidBecomeAdequatelyDrawnObserver=_muninViewDidBecomeAdequatelyDrawnObserver - In the implementation block
@property (assign,nonatomic,__weak) id<MKMuninContainerViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                 //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,getter=isBadgeHidden,nonatomic) BOOL badgeHidden; 
@property (assign,nonatomic) unsigned long long dimmingState;                                     //@synthesize dimmingState=_dimmingState - In the implementation block
-(UIActivityIndicatorView *)activityIndicator;
-(MKMuninContainerBadgeView *)badgeView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<MKMuninContainerViewDelegate>)delegate;
-(void)setBadgeView:(MKMuninContainerBadgeView *)arg1 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setDimmingView:(UIView *)arg1 ;
-(MKMapItem *)mapItem;
-(void)setDelegate:(id<MKMuninContainerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithPhotosDimmingStyle:(BOOL)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)_updateDimmingViewBackgroundColor;
-(void)_updateDimmingViewActivityIndicator;
-(void)_updateDimmingStateForMuninView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_commonInitWithMuninView:(id)arg1 ;
-(void)setDimmingState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)isBadgeHidden;
-(id)initWithCoder:(id)arg1 ;
-(void)_setDimmingViewHidden:(BOOL)arg1 loading:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id<NSObject>)muninViewDidBecomeAdequatelyDrawnObserver;
-(void)setMuninViewDidBecomeAdequatelyDrawnObserver:(id<NSObject>)arg1 ;
-(UIColor *)dimmingViewBackgroundColorPhotosOpaque;
-(UIColor *)dimmingViewBackgroundColorClear;
-(UIColor *)dimmingViewBackgroundColorBlackTranslucent;
-(UIColor *)dimmingViewBackgroundColorBlackOpaque;
-(void)setBadgeHidden:(BOOL)arg1 ;
-(void)setDimmingState:(unsigned long long)arg1 ;
-(unsigned long long)dimmingState;
-(BOOL)photosDimmingStyle;
-(void)setPhotosDimmingStyle:(BOOL)arg1 ;
-(BOOL)pipDimmingStyle;
-(void)setPipDimmingStyle:(BOOL)arg1 ;
-(void)infoCardThemeChanged;
-(void)setMapItem:(id)arg1 wantsCloseUpView:(BOOL)arg2 ;
-(id)muninViewIfPresent;
-(void)cancelIfPresent;
-(void)didAddSubview:(id)arg1 ;
-(UIView *)dimmingView;
-(id)initWithMuninView:(id)arg1 ;
-(void)setBadgeHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
@end

