/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFAssertion.h>

@protocol OS_os_transaction;
@class NSObject;

@interface HMFMemoryAssertion : HMFAssertion {

	NSObject*<OS_os_transaction> _internal;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> internal;              //@synthesize internal=_internal - In the implementation block
-(void)invalidate;
-(id)initWithName:(id)arg1 ;
-(NSObject*<OS_os_transaction>)internal;
-(void)setInternal:(NSObject*<OS_os_transaction>)arg1 ;
-(void)mark;
@end

