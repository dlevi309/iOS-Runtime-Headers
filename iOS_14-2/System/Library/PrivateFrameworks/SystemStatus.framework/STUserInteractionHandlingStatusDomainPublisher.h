/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/STStatusDomainPublisher.h>

@interface STUserInteractionHandlingStatusDomainPublisher : STStatusDomainPublisher {

	/*^block*/id _userInteractionHandlerBlock;

}

@property (nonatomic,copy) id userInteractionHandlerBlock;              //@synthesize userInteractionHandlerBlock=_userInteractionHandlerBlock - In the implementation block
-(void)handleUserInteraction:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(id)userInteractionHandlerBlock;
-(void)setUserInteractionHandlerBlock:(id)arg1 ;
-(void)handleUserInteractionsWithBlock:(/*^block*/id)arg1 ;
@end

