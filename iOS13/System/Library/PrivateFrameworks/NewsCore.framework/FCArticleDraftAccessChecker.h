/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCAccessChecker.h>

@class FCPrivateChannelMembershipController;

@interface FCArticleDraftAccessChecker : FCAccessChecker {

	FCPrivateChannelMembershipController* _privateChannelMembershipController;

}

@property (nonatomic,readonly) FCPrivateChannelMembershipController * privateChannelMembershipController;              //@synthesize privateChannelMembershipController=_privateChannelMembershipController - In the implementation block
-(id)init;
-(BOOL)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)canSynchronouslyCheckAccessToItem:(id)arg1 ;
-(void)checkAccessToItem:(id)arg1 withQualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldShowAllDraftContent;
-(FCPrivateChannelMembershipController *)privateChannelMembershipController;
-(id)initWithPrivateChannelMembershipController:(id)arg1 ;
@end

