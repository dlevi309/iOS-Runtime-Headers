/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionRowView.h>
#import <libobjc.A.dylib/UGCCallToActionEditAccessoryViewDelegate.h>
#import <libobjc.A.dylib/MKActivityObserving.h>

@protocol MKUGCCallToActionViewDelegate;
@class UIView, NSArray, UILabel, MKUGCCallToActionViewAppearance, NSString;

@interface MKUGCCallToActionView : MKPlaceSectionRowView <UGCCallToActionEditAccessoryViewDelegate, MKActivityObserving> {

	UIView* _accessoryButtonContainerView;
	UIView* _currentAccessoryView;
	NSArray* _constraints;
	UILabel* _callToActionLabel;
	MKUGCCallToActionViewAppearance* _appearance;
	double _verticalSpacing;
	id<MKUGCCallToActionViewDelegate> _delegate;
	long long _presentationContext;

}

@property (nonatomic,readonly) MKUGCCallToActionViewAppearance * appearance;                 //@synthesize appearance=_appearance - In the implementation block
@property (assign,nonatomic,__weak) id<MKUGCCallToActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long presentationContext;                                  //@synthesize presentationContext=_presentationContext - In the implementation block
@property (nonatomic,readonly) NSString * analyticValue; 
@property (nonatomic,readonly) UIView * anchoringView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupConstraints;
-(id<MKUGCCallToActionViewDelegate>)delegate;
-(long long)presentationContext;
-(NSString *)analyticValue;
-(UIView *)anchoringView;
-(void)_setupSubviews;
-(void)setDelegate:(id<MKUGCCallToActionViewDelegate>)arg1 ;
-(id)initWithAppearance:(id)arg1 ;
-(void)_updateAccessoryView:(BOOL)arg1 ;
-(void)_addPhotosButtonPressed;
-(void)_likeButtonPressed;
-(void)_dislikeButtonPressed;
-(id)initWithAppearance:(id)arg1 verticalSpacing:(double)arg2 ;
-(void)setPresentationContext:(long long)arg1 ;
-(MKUGCCallToActionViewAppearance *)appearance;
-(void)_contentSizeChanged;
-(void)callToActionEditAccessoryViewTapped:(id)arg1 ;
-(void)beginAnimatingActivityIndicator;
-(void)endAnimatingActivityIndicatorWithError:(id)arg1 ;
-(void)_invalidateLayout;
@end

