/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSMutableDictionary, NSObject, NSString;

@interface CUWiFiScanner : NSObject {

	BOOL _activateCalled;
	NSMutableDictionary* _devices;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	BOOL _scanning;
	NSObject*<OS_dispatch_source> _scanTimer;
	BOOL _suspended;
	LogCategory* _ucat;
	unsigned _changeFlags;
	unsigned _scanFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _label;
	NSString* _ssid;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	/*^block*/id _deviceChangedHandler;
	/*^block*/id _errorHandler;
	/*^block*/id _invalidationHandler;

}

@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned scanFlags;                                      //@synthesize scanFlags=_scanFlags - In the implementation block
@property (nonatomic,copy) NSString * ssid;                                           //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,copy) id deviceFoundHandler;                                     //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                      //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (nonatomic,copy) id deviceChangedHandler;                                   //@synthesize deviceChangedHandler=_deviceChangedHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)setChangeFlags:(unsigned)arg1 ;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(id)deviceChangedHandler;
-(id)deviceFoundHandler;
-(void)setDeviceLostHandler:(id)arg1 ;
-(id)errorHandler;
-(id)deviceLostHandler;
-(unsigned)changeFlags;
-(void)_cleanup;
-(void)setErrorHandler:(id)arg1 ;
-(void)suspend;
-(void)setSsid:(NSString *)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)ssid;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setScanFlags:(unsigned)arg1 ;
-(void)activate;
-(void)_scanWiFiStart;
-(void)_scanWiFiFinished:(id)arg1 status:(int)arg2 ;
-(void)_scanWiFiProcessResult:(id)arg1 ;
-(void)_invalidated;
-(void)invalidate;
-(unsigned)scanFlags;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)resume;
-(NSString *)label;
-(void)dealloc;
@end

