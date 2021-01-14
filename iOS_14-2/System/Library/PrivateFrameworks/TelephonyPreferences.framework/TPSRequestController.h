/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/


@protocol OS_dispatch_queue;
@class TPSRequest, NSMapTable, NSMutableOrderedSet, NSObject, CoreTelephonyClient;

@interface TPSRequestController : NSObject {

	TPSRequest* _pendingRequest;
	NSMapTable* _delegateToQueue;
	NSMutableOrderedSet* _requests;
	NSObject*<OS_dispatch_queue> _serialDispatchQueue;
	CoreTelephonyClient* _telephonyClient;

}

@property (nonatomic,readonly) NSMapTable * delegateToQueue;                                  //@synthesize delegateToQueue=_delegateToQueue - In the implementation block
@property (nonatomic,retain) TPSRequest * pendingRequest;                                     //@synthesize pendingRequest=_pendingRequest - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * requests;                                  //@synthesize requests=_requests - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialDispatchQueue;              //@synthesize serialDispatchQueue=_serialDispatchQueue - In the implementation block
@property (nonatomic,readonly) CoreTelephonyClient * telephonyClient;                         //@synthesize telephonyClient=_telephonyClient - In the implementation block
-(void)execute;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialDispatchQueue;
-(id)init;
-(void)setPendingRequest:(TPSRequest *)arg1 ;
-(NSMutableOrderedSet *)requests;
-(void)setRequests:(NSMutableOrderedSet *)arg1 ;
-(NSMapTable *)delegateToQueue;
-(CoreTelephonyClient *)telephonyClient;
-(TPSRequest *)pendingRequest;
-(void)addRequest:(id)arg1 ;
-(void)postResponse:(id)arg1 ;
-(void)executeRequest:(id)arg1 ;
@end

