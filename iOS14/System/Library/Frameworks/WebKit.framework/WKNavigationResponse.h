/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString, WKFrameInfo, NSURLRequest, NSURLResponse;

@interface WKNavigationResponse : NSObject <WKObject> {

	ObjectStorage<API::NavigationResponse> _navigationResponse;

}

@property (nonatomic,readonly) NSString * _sf_suggestedFilename; 
@property (nonatomic,readonly) NSString * _sf_explicitSuggestedFilename; 
@property (nonatomic,readonly) WKFrameInfo * _frame; 
@property (nonatomic,readonly) NSURLRequest * _request; 
@property (nonatomic,readonly) NSString * _downloadAttribute; 
@property (getter=isForMainFrame,nonatomic,readonly) BOOL forMainFrame; 
@property (nonatomic,copy,readonly) NSURLResponse * response; 
@property (nonatomic,readonly) BOOL canShowMIMEType; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)_sf_explicitSuggestedFilename;
-(BOOL)_sf_allowReloadingInMainFrame;
-(NSString *)_sf_suggestedFilename;
-(long long)_sf_responsePolicy:(long long*)arg1 uti:(id*)arg2 ;
-(WKFrameInfo *)_frame;
-(NSString *)description;
-(NSURLResponse *)response;
-(Object*)_apiObject;
-(void)dealloc;
-(NSURLRequest *)_request;
-(BOOL)isForMainFrame;
-(BOOL)canShowMIMEType;
-(NSString *)_downloadAttribute;
@end

