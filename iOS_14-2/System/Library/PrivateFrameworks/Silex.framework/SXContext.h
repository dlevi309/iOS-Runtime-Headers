/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXHost, SXTextContentProvider, SXResourceDataSource;
@class SXDocumentController;

@interface SXContext : NSObject {

	id<SXHost> _host;
	SXDocumentController* _documentController;
	id<SXTextContentProvider> _textContentProvider;
	id<SXResourceDataSource> _resourceDataSource;

}

@property (nonatomic,__weak,readonly) id<SXResourceDataSource> resourceDataSource;              //@synthesize resourceDataSource=_resourceDataSource - In the implementation block
@property (nonatomic,readonly) id<SXHost> host;                                                 //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) SXDocumentController * documentController;                       //@synthesize documentController=_documentController - In the implementation block
@property (nonatomic,readonly) id<SXTextContentProvider> textContentProvider;                   //@synthesize textContentProvider=_textContentProvider - In the implementation block
+(void)prewarm;
-(id<SXHost>)host;
-(SXDocumentController *)documentController;
-(id<SXResourceDataSource>)resourceDataSource;
-(id)initWithIdentifier:(id)arg1 shareURL:(id)arg2 JSONData:(id)arg3 resourceDataSource:(id)arg4 host:(id)arg5 error:(id*)arg6 ;
-(id<SXTextContentProvider>)textContentProvider;
@end

