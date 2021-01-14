/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate;
@class UIView, UITextField, PXGadgetSpec, NSString;

@interface PXMessagesTextEntryGadget : UIViewController <PXGadget> {

	UIView* _containerView;
	UITextField* _textEntryField;
	long long _priority;
	id<PXGadgetDelegate> _delegate;
	PXGadgetSpec* _gadgetSpec;

}

@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                             //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                    //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXGadgetSpec *)gadgetSpec;
-(NSString *)localizedTitle;
-(unsigned long long)gadgetCapabilities;
-(void)viewWillLayoutSubviews;
-(unsigned long long)gadgetType;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id<PXGadgetDelegate>)delegate;
-(void)_updateViewControllerInsets;
-(void)_simulateMessage:(id)arg1 ;
-(NSString *)accessoryButtonTitle;
-(void)userDidSelectAccessoryButton:(id)arg1 ;
-(id)contentViewController;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(unsigned long long)accessoryButtonType;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(BOOL)hasLoadedContentData;
-(unsigned long long)headerStyle;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
@end

