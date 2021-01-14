/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate;
@class PXGadgetSpec, UIButton, NSString;

@interface PXTapToRadarGadget : UIView <PXGadget> {

	PXGadgetSpec* _gadgetSpec;
	long long _priority;
	id<PXGadgetDelegate> _delegate;
	UIButton* _tapToRadarButton;

}

@property (nonatomic,retain) UIButton * tapToRadarButton;                           //@synthesize tapToRadarButton=_tapToRadarButton - In the implementation block
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
-(unsigned long long)gadgetCapabilities;
-(unsigned long long)gadgetType;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id<PXGadgetDelegate>)delegate;
-(void)_tapToRadarTapped:(id)arg1 ;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)tapToRadarButton;
-(void)setTapToRadarButton:(UIButton *)arg1 ;
-(id)contentView;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
@end

