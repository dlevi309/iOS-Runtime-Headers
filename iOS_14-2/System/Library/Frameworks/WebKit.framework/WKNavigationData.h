/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString, NSURLRequest, NSURL, NSURLResponse;

@interface WKNavigationData : NSObject <WKObject> {

	ObjectStorage<API::NavigationData> _data;

}

@property (readonly) NSString * title; 
@property (readonly) NSURLRequest * originalRequest; 
@property (readonly) NSURL * destinationURL; 
@property (readonly) NSURLResponse * response; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)destinationURL;
-(NSURLRequest *)originalRequest;
-(NSURLResponse *)response;
-(Object*)_apiObject;
-(NSString *)title;
-(void)dealloc;
@end

