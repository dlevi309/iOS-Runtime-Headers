/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Union_CU22 _primaryIPv4Addr;
	SCD_Union_CU22 _primaryIPv6Addr;

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
-(id)primaryNetworkChangedHandler;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setPrimaryNetworkChangedHandler:(id)arg1 ;
-(void)_networkInterfacesChanged:(BOOL)arg1 ;
-(NSString *)primaryNetworkSignature;
-(id)primaryIPChangedHandler;
-(/*function pointer*/void*)primaryIPv6Addr;
-(void)setPrimaryIPChangedHandler:(id)arg1 ;
-(id)init;
-(/*function pointer*/void*)primaryIPv4Addr;
-(void)_ensureStarted;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)flags;
-(void)setFlagsChangedHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)description;
-(void)_primaryIPChanged:(BOOL)arg1 ;
-(void)_invalidated;
-(void)invalidate;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(void)dealloc;
-(void)_ensureStopped;
-(id)flagsChangedHandler;
@end

