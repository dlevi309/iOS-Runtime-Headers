/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXCMMCloudViewViewDelegate.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXCMMCloudGadgetViewControllerDelegate;
@class PXGadgetSpec, NSString, PXCMMCloudView;

@interface PXCMMCloudGadgetViewController : UIViewController <PXCMMCloudViewViewDelegate, PXGadget> {

	BOOL _isCPLOn;
	long long _priority;
	id<PXCMMCloudGadgetViewControllerDelegate> _delegate;
	PXGadgetSpec* _gadgetSpec;
	NSString* _gadgetTitle;
	PXCMMCloudView* _cloudView;

}

@property (nonatomic,retain) PXCMMCloudView * cloudView;                                              //@synthesize cloudView=_cloudView - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMCloudGadgetViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * gadgetTitle;                                                    //@synthesize gadgetTitle=_gadgetTitle - In the implementation block
@property (assign,nonatomic) BOOL disableDismissAction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                               //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                                      //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
+(void)setDidDismissCloudGadget:(BOOL)arg1 ;
+(BOOL)didDismissCloudGadget;
+(id)_userDefaults;
-(void)_updateContentInsets;
-(PXGadgetSpec *)gadgetSpec;
-(NSString *)localizedTitle;
-(unsigned long long)gadgetCapabilities;
-(unsigned long long)gadgetType;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(void)setCloudView:(PXCMMCloudView *)arg1 ;
-(PXCMMCloudView *)cloudView;
-(void)completeMyMomentCloudPhotoViewLearnMoreTapped:(id)arg1 ;
-(void)completeMyMomentCloudPhotoViewDismissTapped:(id)arg1 ;
-(void)completeMyMomentCloudPhotoViewSizeThatFitsDidChange:(id)arg1 ;
-(void)setDisableDismissAction:(BOOL)arg1 ;
-(BOOL)disableDismissAction;
-(void)_updateCPLStatus;
-(void)_accountStoreDidChange:(id)arg1 ;
-(id<PXCMMCloudGadgetViewControllerDelegate>)delegate;
-(id)contentViewController;
-(NSString *)gadgetTitle;
-(void)setDelegate:(id<PXCMMCloudGadgetViewControllerDelegate>)arg1 ;
-(void)setGadgetTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(long long)priority;
-(id)initWithSourceType:(unsigned long long)arg1 ;
-(void)setPriority:(long long)arg1 ;
@end

