/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSDate, NSUUID, NSString;

@interface HMDAWDRemoteSessionMetric : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _submitted;
	BOOL _authenticated;
	int _role;
	int _closeReason;
	NSDate* _creation;
	NSUUID* _sessionID;

}

@property (assign,nonatomic) BOOL submitted;                        //@synthesize submitted=_submitted - In the implementation block
@property (nonatomic,retain) NSDate * creation;                     //@synthesize creation=_creation - In the implementation block
@property (nonatomic,readonly) int role;                            //@synthesize role=_role - In the implementation block
@property (getter=isAuthenticated) BOOL authenticated;              //@synthesize authenticated=_authenticated - In the implementation block
@property (nonatomic,readonly) int closeReason;                     //@synthesize closeReason=_closeReason - In the implementation block
@property (nonatomic,readonly) NSUUID * sessionID;                  //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)uuid;
+(int)closeReasonFromError:(id)arg1 ;
-(void)open;
-(int)role;
-(NSUUID *)sessionID;
-(BOOL)isAuthenticated;
-(void)setAuthenticated:(BOOL)arg1 ;
-(int)closeReason;
-(void)setCreation:(NSDate *)arg1 ;
-(NSDate *)creation;
-(BOOL)submitted;
-(void)setSubmitted:(BOOL)arg1 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithClientMode:(BOOL)arg1 sessionID:(id)arg2 ;
@end

