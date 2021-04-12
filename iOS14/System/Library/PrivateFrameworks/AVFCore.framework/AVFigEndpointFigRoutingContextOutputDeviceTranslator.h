/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVFigRoutingContextOutputDeviceTranslator.h>

@class NSString;

@interface AVFigEndpointFigRoutingContextOutputDeviceTranslator : NSObject <AVFigRoutingContextOutputDeviceTranslator> {

	BOOL _useRouteConfigUpdatedNotification;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedOutputDeviceTranslator;
-(id)init;
-(void)setOutputDevice:(id)arg1 withOptions:(CFDictionaryRef)arg2 onRoutingContext:(OpaqueFigRoutingContextRef)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initForUsingRouteConfigUpdatedNotification:(BOOL)arg1 ;
-(void)addOutputDevice:(id)arg1 withOptions:(CFDictionaryRef)arg2 toRoutingContext:(OpaqueFigRoutingContextRef)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)outputDevicesFromRoutingContext:(OpaqueFigRoutingContextRef)arg1 ;
-(id)outputDeviceFromRoutingContext:(OpaqueFigRoutingContextRef)arg1 ;
-(void)removeOutputDevice:(id)arg1 withOptions:(const CFDictionaryRef)arg2 fromRoutingContext:(OpaqueFigRoutingContextRef)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setOutputDevices:(id)arg1 withOptions:(CFDictionaryRef)arg2 onRoutingContext:(OpaqueFigRoutingContextRef)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

