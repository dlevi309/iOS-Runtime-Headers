/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@protocol _SFMailContentProviderDataSource;
@class NSString;

@interface _SFMailContentProvider : NSObject <MFMailComposeViewControllerDelegate> {

	BOOL _restrictAddingPDFContent;
	id<_SFMailContentProviderDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<_SFMailContentProviderDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL restrictAddingPDFContent;                                       //@synthesize restrictAddingPDFContent=_restrictAddingPDFContent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_SFMailContentProviderDataSource>)dataSource;
-(void)setDataSource:(id<_SFMailContentProviderDataSource>)arg1 ;
-(long long)_bestContentTypeForPreferredContentType:(long long)arg1 ;
-(void)_getReaderContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getPDFDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)prepareMailComposeViewController:(id)arg1 withMailToURL:(id)arg2 contentURL:(id)arg3 preferredContentType:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_preferentiallyOrderedContentTypes;
-(BOOL)_canProvideContentType:(long long)arg1 ;
-(id)_preferentiallyOrderedAvailableContentTypes;
-(long long)_defaultPreferredContentType;
-(void)getMailComposeViewControllerWithMailToURL:(id)arg1 contentURL:(id)arg2 preferredContentType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_getWebArchiveDataWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)restrictAddingPDFContent;
-(void)setRestrictAddingPDFContent:(BOOL)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
@end

