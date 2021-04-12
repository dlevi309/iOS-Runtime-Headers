/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/


@protocol HLPReachabilityManagerDelegate;
@class HLPReachability, NSString;

@interface HLPReachabilityManager : NSObject {

	BOOL _notifying;
	BOOL _hostActive;
	BOOL _reachabilityInitialized;
	BOOL _connected;
	BOOL _internetActive;
	id<HLPReachabilityManagerDelegate> _delegate;
	HLPReachability* _internetReachability;
	HLPReachability* _hostReachability;
	NSString* _hostName;

}

@property (assign,nonatomic) BOOL reachabilityInitialized;                                    //@synthesize reachabilityInitialized=_reachabilityInitialized - In the implementation block
@property (assign,nonatomic) BOOL connected;                                                  //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) BOOL internetActive;                                             //@synthesize internetActive=_internetActive - In the implementation block
@property (assign,nonatomic,__weak) id<HLPReachabilityManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HLPReachability * internetReachability;                          //@synthesize internetReachability=_internetReachability - In the implementation block
@property (nonatomic,retain) HLPReachability * hostReachability;                              //@synthesize hostReachability=_hostReachability - In the implementation block
@property (nonatomic,retain) NSString * hostName;                                             //@synthesize hostName=_hostName - In the implementation block
-(BOOL)connected;
-(void)setConnected:(BOOL)arg1 ;
-(id)init;
-(id<HLPReachabilityManagerDelegate>)delegate;
-(void)setHostName:(NSString *)arg1 ;
-(BOOL)isNetworkError:(id)arg1 ;
-(NSString *)hostName;
-(void)setDelegate:(id<HLPReachabilityManagerDelegate>)arg1 ;
-(void)reachabilityChanged:(id)arg1 ;
-(void)startNotifier;
-(void)setInternetActive:(BOOL)arg1 ;
-(void)stopNotifier;
-(void)dealloc;
-(void)setReachabilityInitialized:(BOOL)arg1 ;
-(BOOL)reachabilityInitialized;
-(BOOL)internetActive;
-(HLPReachability *)internetReachability;
-(void)setInternetReachability:(HLPReachability *)arg1 ;
-(HLPReachability *)hostReachability;
-(void)setHostReachability:(HLPReachability *)arg1 ;
@end

