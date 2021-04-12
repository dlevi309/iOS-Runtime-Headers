/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSURL, NSString;

@interface WKContextMenuElementInfo : NSObject <WKObject> {

	ObjectStorage<API::ContextMenuElementInfo> _elementInfo;

}

@property (nonatomic,readonly) NSURL * linkURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(Object*)_apiObject;
-(id)_activatedElementInfo;
-(NSURL *)linkURL;
@end

