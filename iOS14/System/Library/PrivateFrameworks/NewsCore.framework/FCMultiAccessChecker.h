/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCAccessChecker.h>

@class NSArray;

@interface FCMultiAccessChecker : FCAccessChecker {

	NSArray* _accessCheckers;

}

@property (nonatomic,copy,readonly) NSArray * accessCheckers;              //@synthesize accessCheckers=_accessCheckers - In the implementation block
-(id)init;
-(void)checkAccessToItem:(id)arg1 withQualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long*)arg2 error:(id*)arg3 ;
-(id)initWithAccessCheckers:(id)arg1 ;
-(BOOL)canSynchronouslyCheckAccessToItem:(id)arg1 ;
-(NSArray *)accessCheckers;
@end

