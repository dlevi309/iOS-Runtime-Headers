/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCMultiAccessChecker.h>

@protocol FCPaidAccessCheckerType;
@class FCPrivateChannelMembershipController;

@interface FCArticleAccessChecker : FCMultiAccessChecker {

	id<FCPaidAccessCheckerType> _paidAccessChecker;
	FCPrivateChannelMembershipController* _privateChannelMembershipController;

}

@property (nonatomic,readonly) id<FCPaidAccessCheckerType> paidAccessChecker;                                          //@synthesize paidAccessChecker=_paidAccessChecker - In the implementation block
@property (nonatomic,readonly) FCPrivateChannelMembershipController * privateChannelMembershipController;              //@synthesize privateChannelMembershipController=_privateChannelMembershipController - In the implementation block
-(id<FCPaidAccessCheckerType>)paidAccessChecker;
-(id)init;
-(id)initWithAccessCheckers:(id)arg1 ;
-(id)initWithPaidAccessChecker:(id)arg1 privateChannelMembershipController:(id)arg2 ;
-(FCPrivateChannelMembershipController *)privateChannelMembershipController;
@end

