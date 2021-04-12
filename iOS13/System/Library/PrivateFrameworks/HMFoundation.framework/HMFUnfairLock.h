/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLocking.h>

@interface HMFUnfairLock : HMFObject <HMFLocking> {

	unsigned long long _options;

}

@property (readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
+(id)lock;
+(id)lockWithOptions:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)options;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)lock;
-(void)unlock;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)assertOwner;
-(void)assertNotOwner;
@end

