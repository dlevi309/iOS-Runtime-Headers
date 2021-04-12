/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/


@class NSString, TPSReachability;

@interface TPSReachabilityManager : NSObject {

	BOOL _notifying;
	BOOL _hostActive;
	BOOL _reachabilityInitialized;
	BOOL _connected;
	BOOL _internetActive;
	NSString* _hostName;
	TPSReachability* _internetReachability;
	TPSReachability* _hostReachability;

}

@property (assign,nonatomic) BOOL reachabilityInitialized;                        //@synthesize reachabilityInitialized=_reachabilityInitialized - In the implementation block
@property (assign,nonatomic) BOOL connected;                                      //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) BOOL internetActive;                                 //@synthesize internetActive=_internetActive - In the implementation block
@property (nonatomic,retain) NSString * hostName;                                 //@synthesize hostName=_hostName - In the implementation block
@property (nonatomic,retain) TPSReachability * internetReachability;              //@synthesize internetReachability=_internetReachability - In the implementation block
@property (nonatomic,retain) TPSReachability * hostReachability;                  //@synthesize hostReachability=_hostReachability - In the implementation block
+(id)defaultManager;
-(id)init;
-(void)dealloc;
-(NSString *)hostName;
-(void)setInternetActive:(BOOL)arg1 ;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)connected;
-(void)setHostName:(NSString *)arg1 ;
-(void)stopNotifier;
-(void)startNotifier;
-(void)reachabilityChanged:(id)arg1 ;
-(void)setReachabilityInitialized:(BOOL)arg1 ;
-(void)updateStatus:(id)arg1 ;
-(BOOL)isNetworkError:(id)arg1 ;
-(BOOL)reachabilityInitialized;
-(BOOL)internetActive;
-(TPSReachability *)internetReachability;
-(void)setInternetReachability:(TPSReachability *)arg1 ;
-(TPSReachability *)hostReachability;
-(void)setHostReachability:(TPSReachability *)arg1 ;
@end

