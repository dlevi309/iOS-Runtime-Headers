/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <libobjc.A.dylib/SUAutoInstallOperationClientHandler.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol SUAutoInstallOperationDelegate;
@class SUManagerClient, NSUUID, SUAutoInstallForecast, NSString;

@interface SUAutoInstallOperation : NSObject <SUAutoInstallOperationClientHandler, NSSecureCoding> {

	SUManagerClient* _client;
	NSUUID* _id;
	id<SUAutoInstallOperationDelegate> _delegate;
	SUAutoInstallForecast* _forecast;
	int _agreementStatus;
	BOOL _canceled;
	BOOL _expired;
	BOOL _clientOwned;

}

@property (assign,nonatomic) id<SUAutoInstallOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) SUAutoInstallForecast * forecast;                //@synthesize forecast=_forecast - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired;                          //@synthesize expired=_expired - In the implementation block
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled;                        //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic) int agreementStatus;                                      //@synthesize agreementStatus=_agreementStatus - In the implementation block
@property (nonatomic,retain,readonly) NSUUID * id;                                     //@synthesize id=_id - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSUUID *)id;
-(BOOL)isCanceled;
-(SUAutoInstallForecast *)forecast;
-(id)init;
-(id<SUAutoInstallOperationDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(void)setDelegate:(id<SUAutoInstallOperationDelegate>)arg1 ;
-(NSString *)description;
-(BOOL)isExpired;
-(id)initWithCoder:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setAgreementStatus:(int)arg1 ;
-(int)agreementStatus;
-(id)_initWithClient:(id)arg1 clientOwned:(BOOL)arg2 id:(id)arg3 forecast:(id)arg4 agreementStatus:(int)arg5 cancelled:(BOOL)arg6 expired:(BOOL)arg7 ;
-(BOOL)_isEffectivelyScheduled;
-(BOOL)_isValidForScheduling;
-(BOOL)_isValidTillDate:(id)arg1 ;
-(BOOL)_isDateExpired:(id)arg1 ;
-(void)_noteAutoInstallOperationWasCancelled;
-(void)_noteAutoInstallOperationDidExpireWithError:(id)arg1 ;
-(void)_noteAutoInstallOperationDidConsent;
-(void)_noteAutoInstallOperationIsReadyToInstall:(/*^block*/id)arg1 ;
-(void)_noteAutoInstallOperationPasscodePolicyChanged:(unsigned long long)arg1 ;
-(id)initWithAutoInstallOperationModel:(id)arg1 client:(id)arg2 ;
@end

