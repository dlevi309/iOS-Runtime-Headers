/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
*/

#import <PrintKit/_PK_OneShotXPC.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface PK_HTTPProxy : _PK_OneShotXPC {

	NSObject*<OS_dispatch_queue> _httpQueue;
	int _msTimeout;
	int _lastError;

}

@property (readonly) int lastError;              //@synthesize lastError=_lastError - In the implementation block
-(int)lastError;
-(id)initWithTimeout:(int)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(void)withProtocolAsync:(/*^block*/id)arg1 ;
-(void)withProtocolSync:(/*^block*/id)arg1 ;
@end

