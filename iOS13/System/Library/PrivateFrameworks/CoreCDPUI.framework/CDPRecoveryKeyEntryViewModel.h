/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/


@protocol CDPRecoveryKeyValidator;
@class CDPContext, CDPRemoteDeviceSecretValidator;

@interface CDPRecoveryKeyEntryViewModel : NSObject {

	int _mode;
	CDPContext* _context;
	id<CDPRecoveryKeyValidator> _validator;
	CDPRemoteDeviceSecretValidator* _secretValidator;
	BOOL _shouldSuppressCancelButton;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                 //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) int mode;                                   //@synthesize mode=_mode - In the implementation block
@property (assign) BOOL shouldSuppressCancelButton;              //@synthesize shouldSuppressCancelButton=_shouldSuppressCancelButton - In the implementation block
-(int)mode;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)headerTitle;
-(id)placeholderText;
-(void)handleCancel;
-(id)headerSubtitle;
-(id)initWithContext:(id)arg1 validator:(id)arg2 ;
-(id)recoveryKey;
-(id)initWithContext:(id)arg1 validator:(id)arg2 mode:(int)arg3 ;
-(void)setShouldSuppressCancelButton:(BOOL)arg1 ;
-(id)footerButtonTitle;
-(id)footerLabelText;
-(void)processCollectedRecoveryKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldSuppressCancelButton;
@end

