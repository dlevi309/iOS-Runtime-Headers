/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSURL, NSString;

@interface WKContextMenuElementInfo : NSObject <WKObject> {

	ObjectStorage<API::ContextMenuElementInfo> _elementInfo;

}

@property (nonatomic,readonly) NSURL * linkURL; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)linkURL;
-(Object*)_apiObject;
-(id)_activatedElementInfo;
@end

