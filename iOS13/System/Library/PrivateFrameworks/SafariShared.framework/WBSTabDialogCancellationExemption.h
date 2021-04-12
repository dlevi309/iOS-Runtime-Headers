/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@interface WBSTabDialogCancellationExemption : NSObject {

	/*^block*/id _cancellationExemptionHandler;

}
+(id)sameOriginNavigationExemption:(id)arg1 ;
+(id)provisionalNavigationExemption;
+(id)committedNavigationExemption;
-(id)init;
-(id)initWithCancellationHandler:(/*^block*/id)arg1 ;
-(BOOL)isExemptFromCancellationInContext:(id)arg1 ;
@end

