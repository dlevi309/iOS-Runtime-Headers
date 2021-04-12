/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>

@class NSString, UIView;

@interface PXFooterViewModel : PXObservable {

	BOOL _isPaused;
	float _progress;
	long long _animatedIconMode;
	NSString* _title;
	NSString* _extendedTitle;
	NSString* _subtitle1;
	NSString* _subtitle2;
	long long _actionStyle;
	NSString* _actionTitle;
	NSString* _actionConfirmationAlertTitle;
	NSString* _actionConfirmationAlertSubtitle;
	NSString* _actionConfirmationAlertButtonTitle;
	/*^block*/id _action;
	UIView* _accessoryView;
	UIView* _filterView;

}

@property (nonatomic,readonly) long long animatedIconMode;                                 //@synthesize animatedIconMode=_animatedIconMode - In the implementation block
@property (nonatomic,readonly) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * extendedTitle;                                   //@synthesize extendedTitle=_extendedTitle - In the implementation block
@property (nonatomic,readonly) NSString * subtitle1;                                       //@synthesize subtitle1=_subtitle1 - In the implementation block
@property (nonatomic,readonly) NSString * subtitle2;                                       //@synthesize subtitle2=_subtitle2 - In the implementation block
@property (nonatomic,readonly) BOOL isPaused;                                              //@synthesize isPaused=_isPaused - In the implementation block
@property (nonatomic,readonly) float progress;                                             //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) long long actionStyle;                                      //@synthesize actionStyle=_actionStyle - In the implementation block
@property (nonatomic,readonly) NSString * actionTitle;                                     //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,readonly) NSString * actionConfirmationAlertTitle;                    //@synthesize actionConfirmationAlertTitle=_actionConfirmationAlertTitle - In the implementation block
@property (nonatomic,readonly) NSString * actionConfirmationAlertSubtitle;                 //@synthesize actionConfirmationAlertSubtitle=_actionConfirmationAlertSubtitle - In the implementation block
@property (nonatomic,readonly) NSString * actionConfirmationAlertButtonTitle;              //@synthesize actionConfirmationAlertButtonTitle=_actionConfirmationAlertButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) id action;                                             //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) UIView * accessoryView;                                     //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,readonly) UIView * filterView;                                        //@synthesize filterView=_filterView - In the implementation block
-(NSString *)subtitle2;
-(float)progress;
-(void)setActionConfirmationAlertSubtitle:(NSString *)arg1 ;
-(id)init;
-(void)setFilterView:(UIView *)arg1 ;
-(void)setSubtitle1:(NSString *)arg1 ;
-(UIView *)accessoryView;
-(long long)actionStyle;
-(void)setActionTitle:(NSString *)arg1 ;
-(long long)animatedIconMode;
-(void)setTitle:(NSString *)arg1 ;
-(UIView *)filterView;
-(NSString *)extendedTitle;
-(id)action;
-(void)setAccessoryView:(UIView *)arg1 ;
-(void)setAction:(id)arg1 ;
-(NSString *)actionTitle;
-(void)setSubtitle2:(NSString *)arg1 ;
-(void)setIsPaused:(BOOL)arg1 ;
-(void)setExtendedTitle:(NSString *)arg1 ;
-(NSString *)actionConfirmationAlertButtonTitle;
-(void)setActionConfirmationAlertTitle:(NSString *)arg1 ;
-(NSString *)actionConfirmationAlertTitle;
-(void)setActionConfirmationAlertButtonTitle:(NSString *)arg1 ;
-(NSString *)actionConfirmationAlertSubtitle;
-(void)setAnimatedIconMode:(long long)arg1 ;
-(NSString *)subtitle1;
-(void)footerAnimationCrossedGridCycleBoundary;
-(void)setProgress:(float)arg1 ;
-(id)mutableChangeObject;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)isPaused;
-(NSString *)title;
@end

