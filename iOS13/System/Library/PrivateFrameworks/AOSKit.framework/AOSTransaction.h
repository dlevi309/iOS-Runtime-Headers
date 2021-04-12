/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)finalize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)error;
-(id)result;
-(BOOL)isSuccessful;
@end

