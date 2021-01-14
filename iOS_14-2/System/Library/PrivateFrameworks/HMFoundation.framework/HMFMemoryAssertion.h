/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFAssertion.h>

@protocol OS_os_transaction;
@class NSObject;

@interface HMFMemoryAssertion : HMFAssertion {

	NSObject*<OS_os_transaction> _internal;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> internal;              //@synthesize internal=_internal - In the implementation block
-(void)setInternal:(NSObject*<OS_os_transaction>)arg1 ;
-(NSObject*<OS_os_transaction>)internal;
-(void)mark;
-(id)initWithName:(id)arg1 ;
-(void)invalidate;
@end

