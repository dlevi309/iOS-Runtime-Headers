/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/WKURLSchemeTaskPrivate.h>

@class NSString, NSURLRequest;

@interface WKURLSchemeTaskImpl : NSObject <WKObject, WKURLSchemeTaskPrivate> {

	ObjectStorage<API::URLSchemeTask> _urlSchemeTask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
@property (nonatomic,copy,readonly) NSURLRequest * request; 
@property (nonatomic,readonly) BOOL _requestOnlyIfCached; 
-(void)dealloc;
-(NSURLRequest *)request;
-(void)didReceiveData:(id)arg1 ;
-(Object*)_apiObject;
-(void)didReceiveResponse:(id)arg1 ;
-(void)didFinish;
-(void)didFailWithError:(id)arg1 ;
-(void)_didPerformRedirection:(id)arg1 newRequest:(id)arg2 ;
-(BOOL)_requestOnlyIfCached;
@end

