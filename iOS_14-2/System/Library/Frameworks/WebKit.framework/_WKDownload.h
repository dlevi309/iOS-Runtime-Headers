/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLRequest, WKWebView, NSArray, NSData, WKFrameInfo, NSString;

@interface _WKDownload : NSObject <WKObject, NSCopying> {

	ObjectStorage<WebKit::DownloadProxy> _download;

}

@property (nonatomic,readonly) NSURLRequest * request; 
@property (nonatomic,__weak,readonly) WKWebView * originatingWebView; 
@property (nonatomic,copy,readonly) NSArray * redirectChain; 
@property (nonatomic,readonly) BOOL wasUserInitiated; 
@property (nonatomic,readonly) NSData * resumeData; 
@property (nonatomic,readonly) WKFrameInfo * originatingFrame; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)resumeData;
-(NSURLRequest *)request;
-(void)publishProgressAtURL:(id)arg1 ;
-(WKWebView *)originatingWebView;
-(NSArray *)redirectChain;
-(BOOL)wasUserInitiated;
-(WKFrameInfo *)originatingFrame;
-(Object*)_apiObject;
-(void)cancel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

