/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

