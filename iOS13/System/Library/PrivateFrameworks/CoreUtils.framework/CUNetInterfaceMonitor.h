/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSObject, NSString;

@interface CUNetInterfaceMonitor : NSObject {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	SCDynamicStoreRef _scStore;
	LogCategory* _ucat;
	unsigned _flags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	/*^block*/id _flagsChangedHandler;
	/*^block*/id _primaryIPChangedHandler;
	/*^block*/id _primaryNetworkChangedHandler;
	NSString* _primaryNetworkSignature;
	SCD_Union_CU21 _primaryIPv4Addr;
	SCD_Union_CU21 _primaryIPv6Addr;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                     //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) unsigned flags;                                         //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) id flagsChangedHandler;                                     //@synthesize flagsChangedHandler=_flagsChangedHandler - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* primaryIPv4Addr;              //@synthesize primaryIPv4Addr=_primaryIPv4Addr - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* primaryIPv6Addr;              //@synthesize primaryIPv6Addr=_primaryIPv6Addr - In the implementation block
@property (nonatomic,copy) id primaryIPChangedHandler;                                 //@synthesize primaryIPChangedHandler=_primaryIPChangedHandler - In the implementation block
@property (nonatomic,copy) id primaryNetworkChangedHandler;                            //@synthesize primaryNetworkChangedHandler=_primaryNetworkChangedHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryNetworkSignature;                //@synthesize primaryNetworkSignature=_primaryNetworkSignature - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)_invalidate;
-(unsigned)flags;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(void)_ensureStarted;
-(void)_ensureStopped;
-(void)_networkInterfacesChanged:(BOOL)arg1 ;
-(void)_primaryIPChanged:(BOOL)arg1 ;
-(id)flagsChangedHandler;
-(void)setFlagsChangedHandler:(id)arg1 ;
-(/*function pointer*/void*)primaryIPv4Addr;
-(/*function pointer*/void*)primaryIPv6Addr;
-(id)primaryIPChangedHandler;
-(void)setPrimaryIPChangedHandler:(id)arg1 ;
-(id)primaryNetworkChangedHandler;
-(void)setPrimaryNetworkChangedHandler:(id)arg1 ;
-(NSString *)primaryNetworkSignature;
@end

