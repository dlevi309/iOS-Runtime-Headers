/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)receivedExtensions:(id)arg1 error:(id)arg2 ;
-(_MXExtensionProvider *)extensionProvider;
-(id)allExtensions;
-(NSDictionary *)extensions;
-(void)_clearExtensions;
-(NSDictionary *)mapsExtensions;
-(void)setExtensions:(NSDictionary *)arg1 ;
-(void)setMapsExtensions:(NSDictionary *)arg1 ;
-(id)_extensionWithIdentifier:(id)arg1 ;
-(id)initWithExtensionProvider:(id)arg1 ;
-(id)_siblingExtensionsWithContainingAppIdentifer:(id)arg1 ;
-(void)setContainingAppProxies:(NSDictionary *)arg1 ;
-(NSDictionary *)containingAppProxies;
@end

