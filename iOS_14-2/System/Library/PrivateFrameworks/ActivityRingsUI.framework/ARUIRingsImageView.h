/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/ARUIRingGroupDelegate.h>

@class ARUIRenderContext, ARUIRingGroup, ARUIRenderer, NSString;

@interface ARUIRingsImageView : UIImageView <ARUIRingGroupDelegate> {

	ARUIRenderContext* _renderContext;
	BOOL _needsImageRender;
	ARUIRingGroup* _ringGroup;
	ARUIRenderer* _renderer;

}

@property (nonatomic,readonly) ARUIRingGroup * ringGroup;              //@synthesize ringGroup=_ringGroup - In the implementation block
@property (nonatomic,readonly) ARUIRenderer * renderer;                //@synthesize renderer=_renderer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBounds:(CGRect)arg1 ;
-(ARUIRenderer *)renderer;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(ARUIRingGroup *)ringGroup;
-(id)initWithRingGroup:(id)arg1 renderer:(id)arg2 ;
-(id)initWithRingGroup:(id)arg1 ;
-(void)ringGroupHasUpdated:(id)arg1 ;
-(void)_updateRenderContext;
-(void)_renderImage;
@end

