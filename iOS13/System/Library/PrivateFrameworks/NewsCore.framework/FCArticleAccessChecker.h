/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(FCPrivateChannelMembershipController *)privateChannelMembershipController;
-(id<FCPaidAccessCheckerType>)paidAccessChecker;
-(id)initWithPaidAccessChecker:(id)arg1 privateChannelMembershipController:(id)arg2 ;
-(id)initWithAccessCheckers:(id)arg1 ;
@end

