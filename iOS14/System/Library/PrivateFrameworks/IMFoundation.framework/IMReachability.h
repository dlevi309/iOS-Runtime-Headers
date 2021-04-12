/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@protocol IMReachabilityDelegate, OS_dispatch_queue;
#import <IMFoundation/IMFoundation-Structs.h>
@class NSString, NSObject;

@interface IMReachability : NSObject {

	BOOL _gettingFlags;
	id<IMReachabilityDelegate> _delegate;
	unsigned long long _flags;
	NSString* _description;
	void* _reachabilityRef;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> _queue;                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) void* reachabilityRef;                                   //@synthesize reachabilityRef=_reachabilityRef - In the implementation block
@property (nonatomic,retain) NSString * reachabilityDescription;                      //@synthesize description=_description - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                                //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL gettingFlags;                                       //@synthesize gettingFlags=_gettingFlags - In the implementation block
@property (assign,nonatomic,__weak) id<IMReachabilityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL connectionRequired; 
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityWithRemoteAddress:(id)arg1 ;
+(id)reachabilityWithLocalAddress:(id)arg1 remoteAddress:(id)arg2 ;
-(id)initWithRemoteHost:(id)arg1 delegate:(id)arg2 ;
-(void*)reachabilityRef;
-(id)initWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 delegate:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)_queue;
-(id<IMReachabilityDelegate>)delegate;
-(BOOL)connectionRequired;
-(void)setGettingFlags:(BOOL)arg1 ;
-(unsigned long long)flags;
-(void)setReachabilityRef:(void*)arg1 ;
-(NSString *)reachabilityDescription;
-(id)_initWithReachabilityRef:(SCNetworkReachabilityRef)arg1 description:(id)arg2 delegate:(id)arg3 ;
-(void)setDelegate:(id<IMReachabilityDelegate>)arg1 ;
-(id)description;
-(void)_handleCallbackForSCNetworkReachability:(SCNetworkReachabilityRef)arg1 ;
-(void)_forceGetFlagsIfNecessary;
-(BOOL)gettingFlags;
-(void)set_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setReachabilityDescription:(NSString *)arg1 ;
-(void)dealloc;
@end

