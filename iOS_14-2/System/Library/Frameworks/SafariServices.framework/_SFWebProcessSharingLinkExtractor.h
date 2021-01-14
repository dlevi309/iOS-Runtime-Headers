/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setUpRemoteInterface;
-(id)_extractDominantIFrameWithInjectedObject:(id)arg1 ;
-(id)initWithPageController:(id)arg1 ;
-(id)_extractCanonicalLinkWithInjectedObject:(id)arg1 ;
-(void)fetchSharingLinkWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_extractSharingLink;
-(void)_withInjectedLinkExtractorObjectInFrame:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)_injectedLinkExtractorSourceString;
@end

