/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <NewsArticles/NewsArticles-Structs.h>
#import <Silex/SXComponentView.h>

@interface NewsArticles.AdComponentView : SXComponentView {

	 bannerView;
	 $__lazy_storage_$_debugView;
	 bannerAdFactory;
	 viewManager;
	 requestManager;
	 bannerAdRenderer;
	 integrator;
	 exposureMonitor;
	 tracker;
	 journal;

}
-(void)renderContents;
-(void)presentComponentWithChanges:(SCD_Struct_Ne0)arg1 ;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 ;
-(void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2 ;
-(void)visibilityStateDidChangeFromState:(long long)arg1 ;
@end

