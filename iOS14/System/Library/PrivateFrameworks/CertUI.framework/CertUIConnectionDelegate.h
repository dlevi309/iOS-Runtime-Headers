/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
*/


#import <CertUI/CertUI-Structs.h>
@class CertUITrustManager, NSString;

@interface CertUIConnectionDelegate : NSObject {

	CertUITrustManager* _trustManager;
	id _forwardingDelegate;
	NSString* _connectionDisplayName;
	SCD_Struct_Ce1 _delegateRespondsTo;

}

@property (assign,nonatomic,__weak) id forwardingDelegate;                //@synthesize forwardingDelegate=_forwardingDelegate - In the implementation block
@property (nonatomic,copy) NSString * connectionDisplayName;              //@synthesize connectionDisplayName=_connectionDisplayName - In the implementation block
+(id)defaultServiceForProtocol:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)setConnectionDisplayName:(NSString *)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)_continueConnectionWithResponse:(int)arg1 challenge:(id)arg2 service:(id)arg3 ;
-(void)setForwardingDelegate:(id)arg1 ;
-(id)forwardingDelegate;
-(NSString *)connectionDisplayName;
@end

