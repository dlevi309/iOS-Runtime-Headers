/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKit/UIPointerInteractionDelegate.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@protocol PXPhotosPointerControllerDelegate;
@class UIView, UIPointerInteraction, NSString;

@interface PXPhotosPointerController : NSObject <UIPointerInteractionDelegate, PXSettingsKeyObserver> {

	UIView* _contentView;
	id<PXPhotosPointerControllerDelegate> _delegate;
	UIPointerInteraction* _pointerInteraction;

}

@property (nonatomic,readonly) UIPointerInteraction * pointerInteraction;                          //@synthesize pointerInteraction=_pointerInteraction - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                               //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,__weak,readonly) id<PXPhotosPointerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIPointerInteraction *)pointerInteraction;
-(id<PXPhotosPointerControllerDelegate>)delegate;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)invalidate;
-(void)_setupWithContentView:(id)arg1 ;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 delegate:(id)arg2 ;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
@end

