/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <libobjc.A.dylib/PFMulticasterDistributionList.h>

@class _PFMulticasterReceiverList;

@interface _PFMulticasterMessageReceivers : NSObject <PFMulticasterDistributionList> {

	_PFMulticasterReceiverList* _strongReceivers;
	_PFMulticasterReceiverList* _weakReceivers;

}
-(void)enumerateReceiversWithBlock:(/*^block*/id)arg1 ;
-(id)initWithStrongReceivers:(id)arg1 weakReceivers:(id)arg2 ;
-(unsigned long long)count;
@end

