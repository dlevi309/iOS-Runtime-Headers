/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSSet *)targetedAccountServices;
-(AKDevice *)companionDevice;
-(void)setCompanionDevice:(AKDevice *)arg1 ;
-(void)setTargetedAccountServices:(NSSet *)arg1 ;
@end

