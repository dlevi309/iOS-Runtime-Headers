/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLastSyncStatusCount:(long long)arg1 ;
-(long long)serverCount;
-(void)setMostRecentStatusCount:(long long)arg1 ;
-(long long)mostRecentStatusCount;
-(long long)lastSyncStatusCount;
-(void)setServerCount:(long long)arg1 ;
@end

