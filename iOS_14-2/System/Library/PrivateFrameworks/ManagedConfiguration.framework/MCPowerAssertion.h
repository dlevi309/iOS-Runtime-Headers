/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCProcessAssertion.h>

@interface MCPowerAssertion : MCProcessAssertion {

	BOOL _parked;

}

@property (getter=isParked,nonatomic,readonly) BOOL parked;              //@synthesize parked=_parked - In the implementation block
-(id)initWithReason:(id)arg1 ;
-(BOOL)isParked;
-(void)unpark;
-(void)park;
-(void)dealloc;
@end

