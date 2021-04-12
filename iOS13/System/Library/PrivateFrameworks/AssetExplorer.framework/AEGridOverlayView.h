/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>
#import <libobjc.A.dylib/PXReusableObject.h>

@class UIView, AEGridOverlayConfiguration, NSString;

@interface AEGridOverlayView : UIView <PXUIViewBasicTile, PXReusableObject> {

	AEGridOverlayConfiguration* _overlayConfiguration;

}

@property (setter=_setOverlayConfiguration:,nonatomic,retain) AEGridOverlayConfiguration * overlayConfiguration;              //@synthesize overlayConfiguration=_overlayConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
+(id)loopBadge;
+(id)videoBadge;
+(id)cloudBadge;
+(id)gradientShadow;
+(id)gridOverlayLayoutInfo;
-(id)init;
-(void)prepareForReuse;
-(UIView *)view;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)becomeReusable;
-(CGRect)_cloudRect;
-(CGRect)_videoRect;
-(CGRect)_loopRect;
-(AEGridOverlayConfiguration *)overlayConfiguration;
-(void)_setOverlayConfiguration:(id)arg1 ;
@end

