/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, _MXExtensionProvider;

@interface _MXExtensionDispatchCenter : NSObject {

	NSObject*<OS_dispatch_queue> _lock;
	NSHashTable* _handlers;
	_MXExtensionProvider* _extensionProvider;

}

@property (nonatomic,__weak,readonly) _MXExtensionProvider * extensionProvider;              //@synthesize extensionProvider=_extensionProvider - In the implementation block
-(_MXExtensionProvider *)extensionProvider;
-(void)dispatchExtensions:(id)arg1 error:(id)arg2 ;
-(id)initWithExtensionProvider:(id)arg1 ;
-(id)addExtensionsUpdateHandler:(/*^block*/id)arg1 ;
-(void)removeExtensionUpdateHandler:(id)arg1 ;
@end

