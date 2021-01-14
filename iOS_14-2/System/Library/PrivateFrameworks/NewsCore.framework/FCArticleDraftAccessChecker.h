/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCAccessChecker.h>

@class FCPrivateChannelMembershipController;

@interface FCArticleDraftAccessChecker : FCAccessChecker {

	FCPrivateChannelMembershipController* _privateChannelMembershipController;

}

@property (nonatomic,readonly) FCPrivateChannelMembershipController * privateChannelMembershipController;              //@synthesize privateChannelMembershipController=_privateChannelMembershipController - In the implementation block
-(id)init;
-(void)checkAccessToItem:(id)arg1 withQualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long*)arg2 error:(id*)arg3 ;
-(id)initWithPrivateChannelMembershipController:(id)arg1 ;
-(BOOL)canSynchronouslyCheckAccessToItem:(id)arg1 ;
-(FCPrivateChannelMembershipController *)privateChannelMembershipController;
-(BOOL)shouldShowAllDraftContent;
@end

