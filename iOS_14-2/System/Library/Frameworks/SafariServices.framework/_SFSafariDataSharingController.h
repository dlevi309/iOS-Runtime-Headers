/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface _SFSafariDataSharingController : NSObject {

	NSObject*<OS_dispatch_queue> _dataSharingQueue;
	NSMutableArray* _appBundlesWithSeparateData;

}
+(id)sharedController;
-(id)init;
-(id)systemDataContainerURLWithAppBundleID:(id)arg1 ;
-(void)checkInAppBundleIDIfNeeded:(id)arg1 ;
-(void)_loadAppBundlesWithSeparateDataIfNeeded;
-(void)clearAllWebsitesData;
@end

