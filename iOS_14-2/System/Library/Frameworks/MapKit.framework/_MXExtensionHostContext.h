/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/_MXExtensionContext.h>
#import <libobjc.A.dylib/_MXExtensionHostContextType.h>

@protocol _MXExtensionURLHandling;
@class NSString;

@interface _MXExtensionHostContext : _MXExtensionContext <_MXExtensionHostContextType> {

	id<_MXExtensionURLHandling> _URLHandlingDelegate;

}

@property (assign,nonatomic,__weak) id<_MXExtensionURLHandling> URLHandlingDelegate;              //@synthesize URLHandlingDelegate=_URLHandlingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<_MXExtensionURLHandling>)URLHandlingDelegate;
-(void)setURLHandlingDelegate:(id<_MXExtensionURLHandling>)arg1 ;
@end

