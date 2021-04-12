/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@protocol OS_dispatch_queue, BBSectionAuthorizationManagerDelegate;
@class NSObject, NSMutableDictionary;

@interface BBSectionAuthorizationManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _sectionIDsToAuthorizationExpiryTimers;
	id<BBSectionAuthorizationManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BBSectionAuthorizationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(id<BBSectionAuthorizationManagerDelegate>)delegate;
-(void)setDelegate:(id<BBSectionAuthorizationManagerDelegate>)arg1 ;
-(id)handleChangeForSectionInfo:(id)arg1 replacingSectionInfo:(id)arg2 ;
-(void)_replaceExisitingTimerForSectionID:(id)arg1 withExpirationDate:(id)arg2 ;
-(void)_addNewTimerForSectionID:(id)arg1 withExpirationDate:(id)arg2 ;
-(void)_cancelExisitingTimerForSectionID:(id)arg1 ;
-(void)_queue_triggerDidFireForExpiryTimer:(id)arg1 ;
@end

