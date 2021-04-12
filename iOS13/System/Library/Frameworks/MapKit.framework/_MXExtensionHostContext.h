/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/_MXExtensionContext.h>
#import <libobjc.A.dylib/_MXExtensionHostContextType.h>

@protocol _MXExtensionURLHandling;
@class NSString;

@interface _MXExtensionHostContext : _MXExtensionContext <_MXExtensionHostContextType> {

	id<_MXExtensionURLHandling> _URLHandlingDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<_MXExtensionURLHandling> URLHandlingDelegate;              //@synthesize URLHandlingDelegate=_URLHandlingDelegate - In the implementation block
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<_MXExtensionURLHandling>)URLHandlingDelegate;
-(void)setURLHandlingDelegate:(id<_MXExtensionURLHandling>)arg1 ;
@end

