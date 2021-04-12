/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFActivityItemProvider.h>

@class _SFWebArchiveProvider, LPFileMetadata;

@interface _SFWebArchiveActivityItemProvider : _SFActivityItemProvider {

	_SFWebArchiveProvider* _webArchiveProvider;
	LPFileMetadata* _linkPreviewFileMetadata;

}
-(id)item;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(id)_webArchiveItemProvider;
-(id)initWithWebArchiveProvider:(id)arg1 ;
@end

