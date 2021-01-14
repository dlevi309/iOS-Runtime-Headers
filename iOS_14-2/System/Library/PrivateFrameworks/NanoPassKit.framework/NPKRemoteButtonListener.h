/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKButtonListener.h>
#import <libobjc.A.dylib/NPKDoublePressDelegationAssertionDelegate.h>

@class NPKDoublePressDelegationAssertion, NSString;

@interface NPKRemoteButtonListener : NPKButtonListener <NPKDoublePressDelegationAssertionDelegate> {

	NPKDoublePressDelegationAssertion* _delegationAssertion;

}

@property (nonatomic,retain) NPKDoublePressDelegationAssertion * delegationAssertion;              //@synthesize delegationAssertion=_delegationAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)doublePressDelegationAssertionDidReceiveDelegatedDoublePressEvent:(id)arg1 ;
-(NPKDoublePressDelegationAssertion *)delegationAssertion;
-(void)setDelegationAssertion:(NPKDoublePressDelegationAssertion *)arg1 ;
@end

