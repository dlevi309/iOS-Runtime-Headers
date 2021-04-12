/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@interface WBSTabDialogCancellationExemption : NSObject {

	/*^block*/id _cancellationExemptionHandler;

}
+(id)provisionalNavigationExemption;
+(id)committedNavigationExemption;
+(id)sameOriginNavigationExemption:(id)arg1 ;
-(id)init;
-(id)initWithCancellationHandler:(/*^block*/id)arg1 ;
-(BOOL)isExemptFromCancellationInContext:(id)arg1 ;
@end

