/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@class NSString, NSTimer;

@interface IMNetworkAvailability : NSObject {

	NSString* _guid;
	NSTimer* _timer;
	double _timeout;
	double _wifiTimeout;
	double _startTime;
	unsigned long long _flags;
	unsigned long long _options;
	/*^block*/id _completionBlock;
	void* _context;

}

@property (assign,nonatomic) void* context;              //@synthesize context=_context - In the implementation block
-(BOOL)_isNetworkAvailablibityCheckingDone:(BOOL)arg1 wantsWiFi:(BOOL)arg2 wantsCellular:(BOOL)arg3 cellular:(BOOL)arg4 hasCellularDataConnection:(BOOL)arg5 done:(BOOL)arg6 withinTimeWindow:(BOOL)arg7 ;
-(void)start;
-(void*)context;
-(void)_cancel;
-(void)_timerHit:(id)arg1 ;
-(id)initWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 timeout:(double)arg3 wifiTimeout:(double)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)initWithFlags:(unsigned long long)arg1 timeout:(double)arg2 wifiTimeout:(double)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_setTimer;
-(void)cancel;
-(void)dealloc;
-(void)setContext:(void*)arg1 ;
@end

