/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate, PXPhotoLibraryPresenting;
@class PXGadgetSpec, UIViewController, NSString;

@interface PXMessagesRecentPhotosGadget : NSObject <PXGadget> {

	long long _priority;
	id<PXGadgetDelegate> _delegate;
	PXGadgetSpec* _gadgetSpec;
	UIViewController*<PXPhotoLibraryPresenting> _recentPhotosViewController;
	double _preferredHeight;

}

@property (nonatomic,retain) UIViewController*<PXPhotoLibraryPresenting> recentPhotosViewController;              //@synthesize recentPhotosViewController=_recentPhotosViewController - In the implementation block
@property (assign,nonatomic) double preferredHeight;                                                              //@synthesize preferredHeight=_preferredHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                                           //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                                                  //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXGadgetSpec *)gadgetSpec;
-(NSString *)localizedTitle;
-(unsigned long long)gadgetCapabilities;
-(unsigned long long)gadgetType;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id<PXGadgetDelegate>)delegate;
-(void)_updateViewControllerInsets;
-(NSString *)accessoryButtonTitle;
-(void)userDidSelectAccessoryButton:(id)arg1 ;
-(id)contentViewController;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(double)preferredHeight;
-(unsigned long long)accessoryButtonType;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIViewController*<PXPhotoLibraryPresenting>)recentPhotosViewController;
-(void)setRecentPhotosViewController:(UIViewController*<PXPhotoLibraryPresenting>)arg1 ;
-(void)setPreferredHeight:(double)arg1 ;
-(unsigned long long)headerStyle;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
@end

