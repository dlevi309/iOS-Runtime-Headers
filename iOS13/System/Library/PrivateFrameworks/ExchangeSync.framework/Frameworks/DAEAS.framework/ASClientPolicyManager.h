/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASPolicyManager.h>

@class NSString;

@interface ASClientPolicyManager : ASPolicyManager {

	NSString* _powerAssertionGroupIdentifier;

}

@property (nonatomic,retain) NSString * powerAssertionGroupIdentifier;              //@synthesize powerAssertionGroupIdentifier=_powerAssertionGroupIdentifier - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)requestPolicyUpdate;
-(void)policyKeyChanged:(id)arg1 ;
-(void)policyFailedToUpdate;
-(void)setPowerAssertionGroupIdentifier:(NSString *)arg1 ;
-(NSString *)powerAssertionGroupIdentifier;
@end

