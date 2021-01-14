/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface _SFStoreBannerTracker : NSObject {

	NSMutableDictionary* _blockedProducts;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedTracker;
-(void)load;
-(id)filePath;
-(void)clear;
-(id)init;
-(void)save;
-(void)isProductBannerBlocked:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)blockProductBanner:(id)arg1 ;
@end

