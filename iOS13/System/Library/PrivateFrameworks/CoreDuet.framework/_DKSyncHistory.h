/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSDate;

@interface _DKSyncHistory : NSObject {

	NSDate* _lastSyncDate;
	unsigned long long _lastDaySyncCount;

}

@property (nonatomic,readonly) NSDate * lastSyncDate;                            //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,readonly) unsigned long long lastDaySyncCount;              //@synthesize lastDaySyncCount=_lastDaySyncCount - In the implementation block
-(id)init;
-(id)description;
-(NSDate *)lastSyncDate;
-(unsigned long long)lastDaySyncCount;
-(id)initWithLastSyncDate:(id)arg1 lastDaySyncCount:(unsigned long long)arg2 ;
@end

