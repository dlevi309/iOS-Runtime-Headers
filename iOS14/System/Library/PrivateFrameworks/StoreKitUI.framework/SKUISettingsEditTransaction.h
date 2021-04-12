/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUISettingsEditTransactionDelegate;
@class NSSet, NSLock, NSMutableSet;

@interface SKUISettingsEditTransaction : NSObject {

	NSSet* _all;
	/*^block*/id _commitBlock;
	NSLock* _lock;
	NSMutableSet* _pending;
	BOOL _success;
	id<SKUISettingsEditTransactionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKUISettingsEditTransactionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)beginTransaction;
-(id<SKUISettingsEditTransactionDelegate>)delegate;
-(void)rollbackTransaction;
-(void)commitTransaction;
-(void)setDelegate:(id<SKUISettingsEditTransactionDelegate>)arg1 ;
-(BOOL)isValid;
-(BOOL)isCommiting;
-(void)cancelTransaction;
-(id)initWithSettingDescriptions:(id)arg1 ;
-(void)_delegateWillBeginTransaction;
-(void)_delegateDidFailTransaction;
-(void)_delegateWillCommitTransaction;
-(void)_settingDescription:(id)arg1 completedWithSuccess:(BOOL)arg2 ;
-(void)_delegateDidCompleteTransaction;
-(void)_finalizeCommit;
@end

