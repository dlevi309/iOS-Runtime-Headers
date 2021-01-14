/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKPaymentOptionsSynchronizationDelegate;
@interface PKPaymentOptionsSynchronization : NSObject {

	BOOL _shouldSyncToCloud;
	id<PKPaymentOptionsSynchronizationDelegate> _delegate;

}

@property (assign,nonatomic) BOOL shouldSyncToCloud;                                                   //@synthesize shouldSyncToCloud=_shouldSyncToCloud - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentOptionsSynchronizationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)shouldSyncToCloud;
-(id)init;
-(id<PKPaymentOptionsSynchronizationDelegate>)delegate;
-(BOOL)shouldSyncToCloud;
-(void)setDelegate:(id<PKPaymentOptionsSynchronizationDelegate>)arg1 ;
-(void)_updateSynchronizationBehavior;
-(void)setShouldSyncToCloud:(BOOL)arg1 ;
-(void)_localeDidChangeNotification:(id)arg1 ;
@end

