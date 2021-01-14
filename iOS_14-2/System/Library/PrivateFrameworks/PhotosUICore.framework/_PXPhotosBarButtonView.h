/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class UIBarButtonItem, NSString, _PXPhotosBarButtonSpecManager, PXPhotosViewModel, PXCuratedLibraryOverlayButton, PXUpdater;

@interface _PXPhotosBarButtonView : UIView <PXChangeObserver> {

	UIBarButtonItem* _barButtonItem;
	NSString* _title;
	long long _systemItem;
	NSString* _systemIconImageName;
	id _target;
	SEL _action;
	_PXPhotosBarButtonSpecManager* _specManager;
	PXPhotosViewModel* _viewModel;
	PXCuratedLibraryOverlayButton* _button;
	PXUpdater* _updater;

}

@property (nonatomic,readonly) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long systemItem;                                     //@synthesize systemItem=_systemItem - In the implementation block
@property (nonatomic,readonly) NSString * systemIconImageName;                           //@synthesize systemIconImageName=_systemIconImageName - In the implementation block
@property (nonatomic,__weak,readonly) id target;                                         //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                                               //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) _PXPhotosBarButtonSpecManager * specManager;              //@synthesize specManager=_specManager - In the implementation block
@property (nonatomic,readonly) PXPhotosViewModel * viewModel;                            //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryOverlayButton * button;                   //@synthesize button=_button - In the implementation block
@property (nonatomic,readonly) PXUpdater * updater;                                      //@synthesize updater=_updater - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * barButtonItem;                     //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_PXPhotosBarButtonSpecManager *)specManager;
-(UIBarButtonItem *)barButtonItem;
-(PXCuratedLibraryOverlayButton *)button;
-(void)tintColorDidChange;
-(void)_invalidateButtons;
-(id)initWithTitle:(id)arg1 orSystemItem:(long long)arg2 orSystemIconName:(id)arg3 target:(id)arg4 action:(SEL)arg5 specManager:(id)arg6 viewModel:(id)arg7 ;
-(id)_createButtonConfiguration;
-(PXPhotosViewModel *)viewModel;
-(SEL)action;
-(long long)systemItem;
-(void)layoutSubviews;
-(PXUpdater *)updater;
-(void)_updateButtons;
-(NSString *)systemIconImageName;
-(id)target;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(NSString *)title;
-(void)_handleAction;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

