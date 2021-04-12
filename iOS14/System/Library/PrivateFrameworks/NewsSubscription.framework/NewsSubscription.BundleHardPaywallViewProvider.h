/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
*/

#import <NewsSubscription/NewsSubscription-Structs.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@interface NewsSubscription.BundleHardPaywallViewProvider : NSObject <UITextViewDelegate, UIScrollViewDelegate> {

	 delegate;
	 dataProvider;
	 styler;
	 bundleHardPaywallView;
	 renderer;
	 layoutAttributesFactory;
	 images;
	 badgeImages;

}
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)init;
@end

