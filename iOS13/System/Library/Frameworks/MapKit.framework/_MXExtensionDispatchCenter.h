/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithExtensionProvider:(id)arg1 ;
-(void)dispatchExtensions:(id)arg1 error:(id)arg2 ;
-(id)addExtensionsUpdateHandler:(/*^block*/id)arg1 ;
-(void)removeExtensionUpdateHandler:(id)arg1 ;
-(_MXExtensionProvider *)extensionProvider;
@end

