/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


#import <VideosUI/VideosUI-Structs.h>
@interface VUIOverlayViewFactory : NSObject
+(id)overlayViewWithElement:(id)arg1 cardlayoutType:(long long)arg2 existingView:(id)arg3 canFallbackToInterfaceFactory:(BOOL)arg4 ;
+(long long)_overlayTypeFromString:(id)arg1 ;
+(id)_upnextOverlayWithElement:(id)arg1 existingView:(id)arg2 ;
+(id)_sportsOverlayWithElement:(id)arg1 cardlayoutType:(long long)arg2 overlayType:(long long)arg3 existingView:(id)arg4 ;
+(id)_overlayWithElement:(id)arg1 overlayType:(long long)arg2 existingView:(id)arg3 ;
+(id)_overlayWithMediaItem:(id)arg1 overlayType:(long long)arg2 existingView:(id)arg3 ;
+(UIEdgeInsets)_overlayPaddingWithElement:(id)arg1 ;
+(id)_gradientLayerWithViewElement:(id)arg1 overlayType:(long long)arg2 existingLayer:(id)arg3 ;
+(UIEdgeInsets)_overlayPaddingWithMediaItem:(id)arg1 ;
+(long long)overlayTypeOfElement:(id)arg1 ;
+(id)overlayViewWithMediaItem:(id)arg1 overlayType:(long long)arg2 existingView:(id)arg3 ;
@end
