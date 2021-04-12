/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <ControlCenterUIKit/CCUICAPackageView.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@class NSString;

@interface MediaControlsRoutingCornerView : CCUICAPackageView <_UICursorInteractionDelegate> {

	BOOL _routesAvailable;
	BOOL _routing;
	long long _deviceType;

}

@property (assign,nonatomic) long long deviceType;                                        //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,getter=routesAreAvailable,nonatomic) BOOL routesAvailable;              //@synthesize routesAvailable=_routesAvailable - In the implementation block
@property (assign,getter=isRouting,nonatomic) BOOL routing;                               //@synthesize routing=_routing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)deviceType;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)setDeviceType:(long long)arg1 ;
-(void)setRouting:(BOOL)arg1 ;
-(void)_updateGlyph;
-(BOOL)routesAreAvailable;
-(BOOL)isRouting;
-(void)setRoutesAvailable:(BOOL)arg1 ;
@end

