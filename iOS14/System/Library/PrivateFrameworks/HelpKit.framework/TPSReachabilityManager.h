/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)connected;
-(void)setConnected:(BOOL)arg1 ;
-(id)init;
-(void)setHostName:(NSString *)arg1 ;
-(BOOL)isNetworkError:(id)arg1 ;
-(NSString *)hostName;
-(void)reachabilityChanged:(id)arg1 ;
-(void)startNotifier;
-(void)setInternetActive:(BOOL)arg1 ;
-(void)stopNotifier;
-(void)updateStatus:(id)arg1 ;
-(void)dealloc;
-(void)setReachabilityInitialized:(BOOL)arg1 ;
-(BOOL)reachabilityInitialized;
-(BOOL)internetActive;
-(TPSReachability *)internetReachability;
-(void)setInternetReachability:(TPSReachability *)arg1 ;
-(TPSReachability *)hostReachability;
-(void)setHostReachability:(TPSReachability *)arg1 ;
@end

