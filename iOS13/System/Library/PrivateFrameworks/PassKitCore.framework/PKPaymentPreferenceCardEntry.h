/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class PKPaymentPass, PKRemotePaymentInstrument, PKPaymentApplication, NSString;

@interface PKPaymentPreferenceCardEntry : NSObject {

	BOOL _shouldShowCardUI;
	BOOL _isSelectable;
	PKPaymentPass* _pass;
	PKRemotePaymentInstrument* _remotePaymentInstrument;
	PKPaymentApplication* _paymentApplication;
	NSString* _displayName;
	NSString* _availabilityString;
	/*^block*/id _actionBlock;

}

@property (nonatomic,retain) PKPaymentPass * pass;                                             //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKRemotePaymentInstrument * remotePaymentInstrument;              //@synthesize remotePaymentInstrument=_remotePaymentInstrument - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * paymentApplication;                        //@synthesize paymentApplication=_paymentApplication - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                             //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * availabilityString;                                      //@synthesize availabilityString=_availabilityString - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCardUI;                                            //@synthesize shouldShowCardUI=_shouldShowCardUI - In the implementation block
@property (assign,nonatomic) BOOL isSelectable;                                                //@synthesize isSelectable=_isSelectable - In the implementation block
@property (nonatomic,copy) id actionBlock;                                                     //@synthesize actionBlock=_actionBlock - In the implementation block
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)isSelectable;
-(void)setIsSelectable:(BOOL)arg1 ;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(PKPaymentApplication *)paymentApplication;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(void)setRemotePaymentInstrument:(PKRemotePaymentInstrument *)arg1 ;
-(PKRemotePaymentInstrument *)remotePaymentInstrument;
-(NSString *)availabilityString;
-(void)setAvailabilityString:(NSString *)arg1 ;
-(BOOL)shouldShowCardUI;
-(void)setShouldShowCardUI:(BOOL)arg1 ;
@end

