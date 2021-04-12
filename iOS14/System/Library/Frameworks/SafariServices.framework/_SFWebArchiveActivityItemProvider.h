/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFActivityItemProvider.h>

@class _SFWebArchiveProvider, LPFileMetadata;

@interface _SFWebArchiveActivityItemProvider : _SFActivityItemProvider {

	_SFWebArchiveProvider* _webArchiveProvider;
	LPFileMetadata* _linkPreviewFileMetadata;

}
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)item;
-(id)_webArchiveItemProvider;
-(id)initWithWebArchiveProvider:(id)arg1 ;
-(id)activityViewControllerLinkMetadata:(id)arg1 ;
@end

