/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MRUVisualStylingProviderObserver.h>

@class MRUVisualStylingProvider, UIImageView, UIActivityIndicatorView, NSString;

@interface MRURoutingAccessoryView : UIView <MRUVisualStylingProviderObserver> {

	MRUVisualStylingProvider* _stylingProvider;
	long long _state;
	UIImageView* _imageView;
	UIActivityIndicatorView* _activityView;

}

@property (nonatomic,retain) UIImageView * imageView;                                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityView;                  //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;              //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) long long state;                                         //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(UIActivityIndicatorView *)activityView;
-(void)setActivityView:(UIActivityIndicatorView *)arg1 ;
-(void)layoutSubviews;
-(void)updateState;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)updateVisualStyling;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)visualStylingProviderDidChange:(id)arg1 ;
-(void)updateImageViewVisualStyle;
@end

