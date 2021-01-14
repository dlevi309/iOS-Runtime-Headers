/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/_MXExtensionContext.h>
#import <libobjc.A.dylib/_MXExtensionVendorContextType.h>

@protocol _MXExtensionResponseObserver;
@class NSString;

@interface _MXExtensionVendorContext : _MXExtensionContext <_MXExtensionVendorContextType> {

	id<_MXExtensionResponseObserver> _observer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 ;
-(id)_errorForVendor:(id)arg1 requestDispatcher:(id)arg2 ;
-(void)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3 ;
@end

