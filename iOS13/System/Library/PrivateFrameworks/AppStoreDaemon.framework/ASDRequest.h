/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/ASDRequestDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ASDRequestObserver, ASDRequestProxy;
@class NSUUID;

@interface ASDRequest : NSObject <ASDRequestDelegate, NSSecureCoding> {

	id<ASDRequestObserver> _observer;
	NSUUID* _requestID;
	id<ASDRequestProxy> _proxy;

}

@property (retain) id<ASDRequestProxy> proxy;                    //@synthesize proxy=_proxy - In the implementation block
@property (__weak) id<ASDRequestObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) NSUUID * requestID;               //@synthesize requestID=_requestID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_sharedBroker;
+(void)cancelAllRequestsWithErrorHandler:(/*^block*/id)arg1 ;
-(id)init;
-(id)description;
-(id<ASDRequestObserver>)observer;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObserver:(id<ASDRequestObserver>)arg1 ;
-(void)setProxy:(id<ASDRequestProxy>)arg1 ;
-(id<ASDRequestProxy>)proxy;
-(NSUUID *)requestID;
-(void)_startWithErrorHandler:(/*^block*/id)arg1 ;
-(void)receiveResponse:(id)arg1 ;
-(void)_callErrorHandler:(/*^block*/id)arg1 withError:(id)arg2 ;
-(void)_callErrorHandler:(/*^block*/id)arg1 withError:(id)arg2 orDefaultCode:(unsigned long long)arg3 ;
-(void)_notifyObserverOfCompletionWithError:(id)arg1 ;
-(void)_submitRequestWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_cancelWithErrorHandler:(/*^block*/id)arg1 ;
@end

