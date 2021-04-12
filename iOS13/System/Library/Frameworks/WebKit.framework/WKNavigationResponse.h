/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKFrameInfo, NSURLRequest, NSString, NSURLResponse;

@interface WKNavigationResponse : NSObject <WKObject> {

	ObjectStorage<API::NavigationResponse> _navigationResponse;

}

@property (nonatomic,readonly) WKFrameInfo * _frame; 
@property (nonatomic,readonly) NSURLRequest * _request; 
@property (nonatomic,readonly) NSString * _downloadAttribute; 
@property (getter=isForMainFrame,nonatomic,readonly) BOOL forMainFrame; 
@property (nonatomic,copy,readonly) NSURLResponse * response; 
@property (nonatomic,readonly) BOOL canShowMIMEType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(NSString *)description;
-(WKFrameInfo *)_frame;
-(NSURLResponse *)response;
-(NSURLRequest *)_request;
-(Object*)_apiObject;
-(BOOL)isForMainFrame;
-(BOOL)canShowMIMEType;
-(NSString *)_downloadAttribute;
@end

