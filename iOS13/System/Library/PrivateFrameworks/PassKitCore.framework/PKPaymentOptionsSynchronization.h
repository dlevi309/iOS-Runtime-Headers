/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKPaymentOptionsSynchronizationDelegate;
@interface PKPaymentOptionsSynchronization : NSObject {

	BOOL _shouldSyncToCloud;
	id<PKPaymentOptionsSynchronizationDelegate> _delegate;

}

@property (assign,nonatomic) BOOL shouldSyncToCloud;                                                   //@synthesize shouldSyncToCloud=_shouldSyncToCloud - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentOptionsSynchronizationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PKPaymentOptionsSynchronizationDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentOptionsSynchronizationDelegate>)arg1 ;
-(void)_localeDidChangeNotification:(id)arg1 ;
-(void)_updateSynchronizationBehavior;
-(BOOL)shouldSyncToCloud;
-(void)setShouldSyncToCloud:(BOOL)arg1 ;
@end

