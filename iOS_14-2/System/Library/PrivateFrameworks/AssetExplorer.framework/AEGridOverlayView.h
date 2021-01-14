/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loopBadge;
+(id)videoBadge;
+(id)cloudBadge;
+(id)gradientShadow;
+(id)gridOverlayLayoutInfo;
-(void)becomeReusable;
-(id)init;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)prepareForReuse;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIView *)view;
-(AEGridOverlayConfiguration *)overlayConfiguration;
-(CGRect)_cloudRect;
-(CGRect)_videoRect;
-(CGRect)_loopRect;
-(void)_setOverlayConfiguration:(id)arg1 ;
@end

