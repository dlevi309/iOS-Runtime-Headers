/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@interface _EDMailboxServerCount : NSObject {

	long long _serverCount;
	long long _mostRecentStatusCount;
	long long _lastSyncStatusCount;

}

@property (assign,nonatomic) long long serverCount;                        //@synthesize serverCount=_serverCount - In the implementation block
@property (assign,nonatomic) long long mostRecentStatusCount;              //@synthesize mostRecentStatusCount=_mostRecentStatusCount - In the implementation block
@property (assign,nonatomic) long long lastSyncStatusCount;                //@synthesize lastSyncStatusCount=_lastSyncStatusCount - In the implementation block
-(void)setServerCount:(long long)arg1 ;
-(void)setMostRecentStatusCount:(long long)arg1 ;
-(void)setLastSyncStatusCount:(long long)arg1 ;
-(long long)serverCount;
-(long long)mostRecentStatusCount;
-(long long)lastSyncStatusCount;
@end

