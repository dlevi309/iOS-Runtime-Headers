/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIButton.h>

@class PXUIButtonConfiguration;

@interface PXUIButton : UIButton {

	PXUIButtonConfiguration* _configuration;

}

@property (nonatomic,copy) PXUIButtonConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(BOOL)_cursorInteractionEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(CGRect)_pointerRectForCurrentState;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(PXUIButtonConfiguration *)configuration;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)setConfiguration:(PXUIButtonConfiguration *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

