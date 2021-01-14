/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASPolicyManager.h>

@class NSString;

@interface ASClientPolicyManager : ASPolicyManager {

	NSString* _powerAssertionGroupIdentifier;

}

@property (nonatomic,retain) NSString * powerAssertionGroupIdentifier;              //@synthesize powerAssertionGroupIdentifier=_powerAssertionGroupIdentifier - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)policyKeyChanged:(id)arg1 ;
-(void)policyFailedToUpdate;
-(void)requestPolicyUpdate;
-(void)setPowerAssertionGroupIdentifier:(NSString *)arg1 ;
-(NSString *)powerAssertionGroupIdentifier;
@end

