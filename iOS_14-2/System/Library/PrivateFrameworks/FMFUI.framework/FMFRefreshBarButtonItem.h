/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
*/

#import <FMFUI/FMFUI-Structs.h>
#import <UIKitCore/UIBarButtonItem.h>

@class NSSet, FMFRefreshWrapperButton, FMFTintedActivityIndicatorView, UIImageView;

@interface FMFRefreshBarButtonItem : UIBarButtonItem {

	NSSet* _locations;
	FMFRefreshWrapperButton* _wrapperButton;
	FMFTintedActivityIndicatorView* _aiv;
	UIImageView* _imageView;
	id _locateNotification;

}

@property (nonatomic,retain) FMFRefreshWrapperButton * wrapperButton;              //@synthesize wrapperButton=_wrapperButton - In the implementation block
@property (nonatomic,retain) FMFTintedActivityIndicatorView * aiv;                 //@synthesize aiv=_aiv - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) id locateNotification;                                //@synthesize locateNotification=_locateNotification - In the implementation block
@property (nonatomic,retain) NSSet * locations;                                    //@synthesize locations=_locations - In the implementation block
-(NSSet *)locations;
-(void)addLocation:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)accessibilityLabel;
-(void)locatingInProgressChanged:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(FMFTintedActivityIndicatorView *)aiv;
-(void)setLocations:(NSSet *)arg1 ;
-(UIImageView *)imageView;
-(void)updateLocations;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(void)startAnimating;
-(id)accessibilityHint;
-(void)setAiv:(FMFTintedActivityIndicatorView *)arg1 ;
-(void)stopAnimating;
-(BOOL)isAnimating;
-(void)dealloc;
-(void)removeLocationForHandle:(id)arg1 ;
-(void)setWrapperButton:(FMFRefreshWrapperButton *)arg1 ;
-(FMFRefreshWrapperButton *)wrapperButton;
-(void)localTapped;
-(void)_updateLocateInProgress;
-(BOOL)anyLocationIsUpdating;
-(id)locateNotification;
-(void)setLocateNotification:(id)arg1 ;
@end

