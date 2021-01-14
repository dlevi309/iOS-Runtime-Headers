/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRRequestMessage.h>

@class ACAccount, NSSet, AKDevice;

@interface TRSetupCompanionAuthenticationRequest : TRRequestMessage {

	ACAccount* _account;
	NSSet* _targetedAccountServices;
	AKDevice* _companionDevice;

}

@property (nonatomic,retain) ACAccount * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSSet * targetedAccountServices;              //@synthesize targetedAccountServices=_targetedAccountServices - In the implementation block
@property (nonatomic,retain) AKDevice * companionDevice;                   //@synthesize companionDevice=_companionDevice - In the implementation block
+(BOOL)supportsSecureCoding;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(AKDevice *)companionDevice;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCompanionDevice:(AKDevice *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)targetedAccountServices;
-(void)setTargetedAccountServices:(NSSet *)arg1 ;
@end

