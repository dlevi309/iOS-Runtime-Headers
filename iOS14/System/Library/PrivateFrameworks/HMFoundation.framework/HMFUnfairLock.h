/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)unlock;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(unsigned long long)options;
-(void)lock;
-(void)assertNotOwner;
-(void)assertOwner;
@end

