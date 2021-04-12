/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPass:(PKPaymentPass *)arg1 ;
-(BOOL)isSelectable;
-(void)setDisplayName:(NSString *)arg1 ;
-(PKPaymentPass *)pass;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
-(PKPaymentApplication *)paymentApplication;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(void)setRemotePaymentInstrument:(PKRemotePaymentInstrument *)arg1 ;
-(BOOL)shouldShowCardUI;
-(PKRemotePaymentInstrument *)remotePaymentInstrument;
-(NSString *)displayName;
-(NSString *)availabilityString;
-(void)setAvailabilityString:(NSString *)arg1 ;
-(void)setShouldShowCardUI:(BOOL)arg1 ;
-(void)setIsSelectable:(BOOL)arg1 ;
@end

