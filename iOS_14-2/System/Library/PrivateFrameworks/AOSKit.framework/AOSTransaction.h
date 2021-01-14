/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AOSKit.framework/AOSKit
*/

#import <AOSKit/AOSKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSConditionLock;

@interface AOSTransaction : NSObject <NSCoding> {

	unsigned char didSucceed;
	unsigned char didFinish;
	void* result;
	CFErrorRef error;
	/*function pointer*/void* callbackFunction;
	/*^block*/id callbackBlock;
	NSObject*<OS_dispatch_queue> callbackQueue;
	void* context;
	NSConditionLock* waitLock;
	/*function pointer*/void* contextRetain;
	/*function pointer*/void* contextRelease;

}
-(void)finalize;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)error;
-(id)result;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isSuccessful;
@end

