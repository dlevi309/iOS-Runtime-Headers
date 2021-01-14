/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/WKURLSchemeTaskPrivate.h>

@class WKFrameInfo, NSString, NSURLRequest;

@interface WKURLSchemeTaskImpl : NSObject <WKObject, WKURLSchemeTaskPrivate> {

	ObjectStorage<API::URLSchemeTask> _urlSchemeTask;

}

@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL _requestOnlyIfCached; 
@property (nonatomic,readonly) WKFrameInfo * _frame; 
@property (nonatomic,copy,readonly) NSURLRequest * request; 
-(WKFrameInfo *)_frame;
-(void)didReceiveResponse:(id)arg1 ;
-(void)_didPerformRedirection:(id)arg1 newRequest:(id)arg2 ;
-(BOOL)_requestOnlyIfCached;
-(NSURLRequest *)request;
-(void)didReceiveData:(id)arg1 ;
-(Object*)_apiObject;
-(void)didFailWithError:(id)arg1 ;
-(void)didFinish;
-(void)dealloc;
@end

