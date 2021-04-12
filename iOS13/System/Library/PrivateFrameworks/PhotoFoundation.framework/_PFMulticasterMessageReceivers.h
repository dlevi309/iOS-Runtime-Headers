/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <libobjc.A.dylib/PFMulticasterDistributionList.h>

@class _PFMulticasterReceiverList;

@interface _PFMulticasterMessageReceivers : NSObject <PFMulticasterDistributionList> {

	_PFMulticasterReceiverList* _strongReceivers;
	_PFMulticasterReceiverList* _weakReceivers;

}
-(unsigned long long)count;
-(void)enumerateReceiversWithBlock:(/*^block*/id)arg1 ;
-(id)initWithStrongReceivers:(id)arg1 weakReceivers:(id)arg2 ;
@end

