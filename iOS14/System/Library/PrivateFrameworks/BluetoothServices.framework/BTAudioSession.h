/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BluetoothServices.framework/BluetoothServices
*/

#import <BluetoothServices/BluetoothServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString, NSXPCListenerEndpoint;

@interface BTAudioSession : NSObject <NSSecureCoding> {

	BOOL _activateCalled;
	/*^block*/id _activateCompletion;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	LogCategory* _ucat;
	NSXPCConnection* _xpcCnx;
	BOOL _inAppRouting;
	int _audioArbitrationResult;
	int _category;
	unsigned _flags;
	int _mode;
	unsigned _clientID;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	double _timeoutSeconds;
	NSXPCListenerEndpoint* _testListenerEndpoint;

}

@property (assign,nonatomic) unsigned clientID;                                         //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * testListenerEndpoint;              //@synthesize testListenerEndpoint=_testListenerEndpoint - In the implementation block
@property (assign,nonatomic) int audioArbitrationResult;                                //@synthesize audioArbitrationResult=_audioArbitrationResult - In the implementation block
@property (assign,nonatomic) int category;                                              //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned flags;                                            //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                      //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) BOOL inAppRouting;                                         //@synthesize inAppRouting=_inAppRouting - In the implementation block
@property (nonatomic,copy) NSString * label;                                            //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) double timeoutSeconds;                                     //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (assign,nonatomic) int mode;                                                  //@synthesize mode=_mode - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)timeoutSeconds;
-(unsigned)clientID;
-(void)setTestListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)setClientID:(unsigned)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(int)mode;
-(void)setCategory:(int)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_reportError:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(int)category;
-(void)setMode:(int)arg1 ;
-(void)_ensureXPCStarted;
-(NSXPCListenerEndpoint *)testListenerEndpoint;
-(id)description;
-(void)_interrupted;
-(void)setFlags:(unsigned)arg1 ;
-(void)_invalidated;
-(void)setTimeoutSeconds:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(void)dealloc;
-(int)audioArbitrationResult;
-(void)setAudioArbitrationResult:(int)arg1 ;
-(BOOL)inAppRouting;
-(void)setInAppRouting:(BOOL)arg1 ;
@end

