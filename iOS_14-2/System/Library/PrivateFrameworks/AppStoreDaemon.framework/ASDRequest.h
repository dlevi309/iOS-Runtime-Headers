/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProxy:(id<ASDRequestProxy>)arg1 ;
-(id<ASDRequestProxy>)proxy;
-(void)setObserver:(id<ASDRequestObserver>)arg1 ;
-(id)init;
-(id<ASDRequestObserver>)observer;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_startWithErrorHandler:(/*^block*/id)arg1 ;
-(void)receiveResponse:(id)arg1 ;
-(NSUUID *)requestID;
-(void)_callErrorHandler:(/*^block*/id)arg1 withError:(id)arg2 ;
-(void)_callErrorHandler:(/*^block*/id)arg1 withError:(id)arg2 orDefaultCode:(unsigned long long)arg3 ;
-(id)description;
-(void)_notifyObserverOfCompletionWithError:(id)arg1 ;
-(void)_submitRequestWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_cancelWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

