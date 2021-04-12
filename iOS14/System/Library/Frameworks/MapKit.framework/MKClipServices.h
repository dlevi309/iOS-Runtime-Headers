/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MKClipServices : NSObject {

	NSObject*<OS_dispatch_queue> _removeNonAvailableAppClipLinksQueue;
	NSObject*<OS_dispatch_queue> _requestAppClipMetadataQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)appClipWithQuickLink:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)quickLinksCopyByRemovingNonAvailableAppClipLinks:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestAppClip:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

