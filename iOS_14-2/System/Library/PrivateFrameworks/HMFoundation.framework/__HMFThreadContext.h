/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_voucher;
@class NSThread, NSObject;

@interface __HMFThreadContext : HMFObject {

	BOOL _shouldRestoreVoucher;
	NSThread* _thread;
	unsigned long long _count;
	NSObject*<OS_voucher> _voucher;

}

@property (readonly) NSThread * thread;                                  //@synthesize thread=_thread - In the implementation block
@property (assign,nonatomic) unsigned long long count;                   //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSObject*<OS_voucher> voucher;              //@synthesize voucher=_voucher - In the implementation block
@property (assign,nonatomic) BOOL shouldRestoreVoucher;                  //@synthesize shouldRestoreVoucher=_shouldRestoreVoucher - In the implementation block
+(id)currentContext;
-(NSThread *)thread;
-(NSObject*<OS_voucher>)voucher;
-(void)setCount:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)description;
-(BOOL)shouldRestoreVoucher;
-(unsigned long long)hash;
-(id)__init;
-(void)setVoucher:(NSObject*<OS_voucher>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setShouldRestoreVoucher:(BOOL)arg1 ;
@end

