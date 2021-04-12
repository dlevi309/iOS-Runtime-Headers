/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3 ;
-(void)stopSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 ;
-(id)_errorForVendor:(id)arg1 requestDispatcher:(id)arg2 ;
@end

