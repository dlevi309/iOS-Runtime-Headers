/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)cancel;
-(NSURLRequest *)request;
-(NSData *)resumeData;
-(Object*)_apiObject;
-(void)publishProgressAtURL:(id)arg1 ;
-(WKWebView *)originatingWebView;
-(NSArray *)redirectChain;
-(BOOL)wasUserInitiated;
-(WKFrameInfo *)originatingFrame;
@end

