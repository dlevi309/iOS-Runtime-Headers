/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2RequestContext.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface NEIKEv2DeleteIKEContext : NEIKEv2RequestContext {

	BOOL _responseNeeded;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _callback;

}

@property (assign,nonatomic) BOOL responseNeeded;                                     //@synthesize responseNeeded=_responseNeeded - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,copy) id callback;                                               //@synthesize callback=_callback - In the implementation block
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)sendCallbackSuccess:(BOOL)arg1 session:(id)arg2 ;
-(BOOL)responseNeeded;
-(id)initDeleteIKEWithResponse:(BOOL)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)description;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setResponseNeeded:(BOOL)arg1 ;
@end

