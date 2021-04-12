/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


#import <SiriUI/SiriUI-Structs.h>
@interface SiriUIDeviceInfo : NSObject {

	BOOL _deviceZoomed;
	BOOL _largeFormatPhone;
	BOOL _deviceShouldUseFrozenBackdropSnapshot;
	BOOL _deviceShouldFreezeAura;
	BOOL _deviceShouldDeferFlamesView;
	BOOL _deviceSupportsProximitySensor;
	BOOL _deviceShouldSkipGuidePreloading;

}

@property (getter=isDeviceZoomed,nonatomic,readonly) BOOL deviceZoomed;                      //@synthesize deviceZoomed=_deviceZoomed - In the implementation block
@property (getter=isLargeFormatPhone,nonatomic,readonly) BOOL largeFormatPhone;              //@synthesize largeFormatPhone=_largeFormatPhone - In the implementation block
@property (nonatomic,readonly) BOOL deviceShouldUseFrozenBackdropSnapshot;                   //@synthesize deviceShouldUseFrozenBackdropSnapshot=_deviceShouldUseFrozenBackdropSnapshot - In the implementation block
@property (nonatomic,readonly) BOOL deviceShouldFreezeAura;                                  //@synthesize deviceShouldFreezeAura=_deviceShouldFreezeAura - In the implementation block
@property (nonatomic,readonly) BOOL deviceShouldDeferFlamesView;                             //@synthesize deviceShouldDeferFlamesView=_deviceShouldDeferFlamesView - In the implementation block
@property (nonatomic,readonly) BOOL deviceShouldSkipGuidePreloading;                         //@synthesize deviceShouldSkipGuidePreloading=_deviceShouldSkipGuidePreloading - In the implementation block
@property (nonatomic,readonly) BOOL deviceSupportsProximitySensor;                           //@synthesize deviceSupportsProximitySensor=_deviceSupportsProximitySensor - In the implementation block
+(id)sharedInstance;
-(id)initWithLargeFormatPhone:(BOOL)arg1 gestaltModes:(id)arg2 screenSize:(CGSize)arg3 ;
-(void)_updateProductTypeDerivedProperties;
-(BOOL)isDeviceZoomed;
-(BOOL)isLargeFormatPhone;
-(BOOL)deviceShouldUseFrozenBackdropSnapshot;
-(BOOL)deviceShouldFreezeAura;
-(BOOL)deviceShouldDeferFlamesView;
-(BOOL)deviceSupportsProximitySensor;
-(BOOL)deviceShouldSkipGuidePreloading;
@end

