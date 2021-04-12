/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, _MXExtensionProvider;

@interface _MXExtensionServiceCenter : NSObject {

	NSObject*<OS_dispatch_queue> _extlock;
	NSDictionary* _extensions;
	NSDictionary* _mapsExtensions;
	NSDictionary* _containingAppProxies;
	_MXExtensionProvider* _extensionProvider;

}

@property (nonatomic,copy) NSDictionary * extensions; 
@property (nonatomic,copy) NSDictionary * mapsExtensions; 
@property (nonatomic,copy) NSDictionary * containingAppProxies; 
@property (nonatomic,__weak,readonly) _MXExtensionProvider * extensionProvider;              //@synthesize extensionProvider=_extensionProvider - In the implementation block
-(NSDictionary *)extensions;
-(void)setExtensions:(NSDictionary *)arg1 ;
-(id)initWithExtensionProvider:(id)arg1 ;
-(_MXExtensionProvider *)extensionProvider;
-(NSDictionary *)mapsExtensions;
-(void)setMapsExtensions:(NSDictionary *)arg1 ;
-(void)setContainingAppProxies:(NSDictionary *)arg1 ;
-(void)receivedExtensions:(id)arg1 error:(id)arg2 ;
-(NSDictionary *)containingAppProxies;
-(id)allExtensions;
-(id)_extensionWithIdentifier:(id)arg1 ;
-(void)_clearExtensions;
-(id)_siblingExtensionsWithContainingAppIdentifer:(id)arg1 ;
@end

