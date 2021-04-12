/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@class NSString;

@interface WLMessageParty : NSObject {

	BOOL _isPhoneNumber;
	NSString* _address;
	NSString* _icc;
	NSString* _np;
	NSString* _ccAcNumber;

}

@property (nonatomic,readonly) BOOL isPhoneNumber;                 //@synthesize isPhoneNumber=_isPhoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * address;                 //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * icc;                     //@synthesize icc=_icc - In the implementation block
@property (nonatomic,readonly) NSString * np;                      //@synthesize np=_np - In the implementation block
@property (nonatomic,readonly) NSString * ccAcNumber;              //@synthesize ccAcNumber=_ccAcNumber - In the implementation block
+(id)_guessIccForNumber:(id)arg1 ;
-(NSString *)np;
-(NSString *)icc;
-(id)description;
-(NSString *)address;
-(BOOL)isPhoneNumber;
-(id)_initWithAddress:(id)arg1 addCountryCode:(BOOL)arg2 sqlController:(id)arg3 ;
-(NSString *)ccAcNumber;
@end

