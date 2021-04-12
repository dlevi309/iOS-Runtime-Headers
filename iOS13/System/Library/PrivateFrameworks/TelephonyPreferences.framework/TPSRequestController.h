/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)execute;
-(NSMutableOrderedSet *)requests;
-(void)addRequest:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)setPendingRequest:(TPSRequest *)arg1 ;
-(TPSRequest *)pendingRequest;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setRequests:(NSMutableOrderedSet *)arg1 ;
-(NSMapTable *)delegateToQueue;
-(NSObject*<OS_dispatch_queue>)serialDispatchQueue;
-(CoreTelephonyClient *)telephonyClient;
-(void)executeRequest:(id)arg1 ;
-(void)postResponse:(id)arg1 ;
@end

