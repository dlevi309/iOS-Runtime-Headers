/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol OS_dispatch_queue;
@class FLFollowUpController, NSObject;

@interface AMSFollowUp : NSObject {

	FLFollowUpController* _followUpController;
	NSObject*<OS_dispatch_queue> _followUpQueue;

}

@property (nonatomic,retain) FLFollowUpController * followUpController;               //@synthesize followUpController=_followUpController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> followUpQueue;              //@synthesize followUpQueue=_followUpQueue - In the implementation block
-(id)init;
-(FLFollowUpController *)followUpController;
-(id)postFollowUpItem:(id)arg1 ;
-(id)pendingFollowUps;
-(id)clearFollowUpItem:(id)arg1 ;
-(id)clearFollowUpWithIdentifier:(id)arg1 account:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)followUpQueue;
-(id)_pendingFollowUpWithBackingIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)pendingFollowUpsForAccount:(id)arg1 ;
-(id)pendingFollowUpWithIdentifier:(id)arg1 account:(id)arg2 ;
-(void)setFollowUpController:(FLFollowUpController *)arg1 ;
-(void)setFollowUpQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

