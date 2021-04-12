/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@protocol CATNetworkReachabilityDelegate;
#import <Catalyst/Catalyst-Structs.h>
@class CATAddress;

@interface CATNetworkReachability : NSObject {

	SCNetworkReachabilityRef mReachabilityRef;
	unsigned _flags;
	CATAddress* _address;
	id<CATNetworkReachabilityDelegate> _delegate;

}

@property (assign,nonatomic) unsigned flags;                                                  //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) CATAddress * address;                                          //@synthesize address=_address - In the implementation block
@property (assign,nonatomic,__weak) id<CATNetworkReachabilityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isReachable,nonatomic,readonly) BOOL reachable; 
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithAddress:(id)arg1 ;
+(id)reachabilityForInternetConnection;
+(BOOL)isReachableForLocalWiFiWithFlags:(unsigned)arg1 ;
+(BOOL)isReachableForNetworkWithFlags:(unsigned)arg1 ;
+(id)keyPathsForValuesAffectingReachable;
-(BOOL)isReachable;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)initWithAddress:(id)arg1 ;
-(id<CATNetworkReachabilityDelegate>)delegate;
-(unsigned)flags;
-(void)delegateDidChange;
-(id)debugDescription;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id<CATNetworkReachabilityDelegate>)arg1 ;
-(CATAddress *)address;
-(void)setFlags:(unsigned)arg1 ;
-(void)dealloc;
-(void)configureCallback;
-(void)reachabilityDidChangeWithFlags:(unsigned)arg1 ;
@end

