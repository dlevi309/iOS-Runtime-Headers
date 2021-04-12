/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/_SFWebProcessSharingLinkExtractor.h>

@protocol _SFWebProcessSharingLinkExtractor
@required
-(void)fetchSharingLinkWithCompletionHandler:(/*^block*/id)arg1;

@end


@class _SFWebProcessPlugInPageController, _WKRemoteObjectInterface;

@interface _SFWebProcessSharingLinkExtractor : NSObject <_SFWebProcessSharingLinkExtractor> {

	_SFWebProcessPlugInPageController* _pageController;
	_WKRemoteObjectInterface* _sharingLinkExtractorInterface;

}
-(id)initWithPageController:(id)arg1 ;
-(void)fetchSharingLinkWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setUpRemoteInterface;
-(id)_injectedLinkExtractorSourceString;
-(id)_extractSharingLink;
-(id)_extractCanonicalLinkWithInjectedObject:(id)arg1 ;
-(id)_extractDominantIFrameWithInjectedObject:(id)arg1 ;
-(void)_withInjectedLinkExtractorObjectInFrame:(id)arg1 callback:(/*^block*/id)arg2 ;
@end

