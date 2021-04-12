/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXQuickLookComponentFileProvider.h>

@protocol SXQuickLookComponentFileProvider <NSObject>
@required
-(void)fileForComponent:(id)arg1 onCompletion:(/*^block*/id)arg2 onError:(/*^block*/id)arg3;

@end


@protocol SXDOMObjectProviding, SXResourceDataSource, SXDocumentShareURLProvider;
@class NSString;

@interface SXQuickLookComponentFileProvider : NSObject <SXQuickLookComponentFileProvider> {

	id<SXDOMObjectProviding> _DOMObjectProvider;
	id<SXResourceDataSource> _resourceDataSource;
	id<SXDocumentShareURLProvider> _shareURLProvider;

}

@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;                   //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) id<SXResourceDataSource> resourceDataSource;                  //@synthesize resourceDataSource=_resourceDataSource - In the implementation block
@property (nonatomic,readonly) id<SXDocumentShareURLProvider> shareURLProvider;              //@synthesize shareURLProvider=_shareURLProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(id<SXResourceDataSource>)resourceDataSource;
-(void)fileForComponent:(id)arg1 onCompletion:(/*^block*/id)arg2 onError:(/*^block*/id)arg3 ;
-(id)initWithDOMObjectProvider:(id)arg1 resourceDataSource:(id)arg2 shareURLProvider:(id)arg3 ;
-(id)copyFileIfNeeded:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(id<SXDocumentShareURLProvider>)shareURLProvider;
@end

