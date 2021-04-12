/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@class NSString, NSMutableArray, PHAsset;

@interface PHMediaRequest : NSObject {

	unsigned long long _requestIndex;
	AB _cancelled;
	NSString* _identifierString;
	NSMutableArray* _progresses;
	os_unfair_lock_s _lock;
	BOOL _wantsProgress;
	int _requestID;
	unsigned long long _managerID;
	PHAsset* _asset;
	long long _contextType;
	unsigned long long _signpostID;

}

@property (nonatomic,readonly) int requestID;                                                        //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) unsigned long long requestIndex;                                      //@synthesize requestIndex=_requestIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long managerID;                                         //@synthesize managerID=_managerID - In the implementation block
@property (nonatomic,readonly) PHAsset * asset;                                                      //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) long long contextType;                                                //@synthesize contextType=_contextType - In the implementation block
@property (assign,nonatomic) unsigned long long signpostID;                                          //@synthesize signpostID=_signpostID - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (getter=isSynchronous,nonatomic,readonly) BOOL synchronous; 
@property (getter=isNetworkAccessAllowed,nonatomic,readonly) BOOL networkAccessAllowed; 
@property (nonatomic,readonly) long long downloadIntent; 
@property (assign,nonatomic) BOOL wantsProgress;                                                     //@synthesize wantsProgress=_wantsProgress - In the implementation block
-(long long)contextType;
-(void)handleAvailabilityChangeForResource:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)startRequest;
-(void)setSignpostID:(unsigned long long)arg1 ;
-(unsigned long long)signpostID;
-(id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 ;
-(id)sendMakeAvailableRequestForResource:(id)arg1 reply:(/*^block*/id)arg2 ;
-(unsigned long long)requestIndex;
-(id)sendResourceRepairRequestForResource:(id)arg1 errorCodes:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)recordMetricsWithMetricsHandler:(/*^block*/id)arg1 ;
-(PHAsset *)asset;
-(BOOL)isSynchronous;
-(int)requestID;
-(long long)downloadIntent;
-(BOOL)isNetworkAccessAllowed;
-(void)cancel;
-(BOOL)wantsProgress;
-(BOOL)isCancelled;
-(void)setWantsProgress:(BOOL)arg1 ;
-(unsigned long long)managerID;
-(id)identifierString;
@end

