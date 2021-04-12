/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(UIImageView *)imageView;
-(BOOL)isAnimating;
-(void)setLocations:(NSSet *)arg1 ;
-(void)startAnimating;
-(void)stopAnimating;
-(void)setImageView:(UIImageView *)arg1 ;
-(NSSet *)locations;
-(void)addLocation:(id)arg1 ;
-(void)locatingInProgressChanged:(id)arg1 ;
-(FMFRefreshWrapperButton *)wrapperButton;
-(void)removeLocationForHandle:(id)arg1 ;
-(void)setAiv:(FMFTintedActivityIndicatorView *)arg1 ;
-(void)setWrapperButton:(FMFRefreshWrapperButton *)arg1 ;
-(void)localTapped;
-(FMFTintedActivityIndicatorView *)aiv;
-(void)_updateLocateInProgress;
-(BOOL)anyLocationIsUpdating;
-(void)updateLocations;
-(id)locateNotification;
-(void)setLocateNotification:(id)arg1 ;
@end

