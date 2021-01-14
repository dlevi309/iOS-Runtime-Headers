/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)lastDaySyncCount;
-(id)description;
-(NSDate *)lastSyncDate;
-(id)initWithLastSyncDate:(id)arg1 lastDaySyncCount:(unsigned long long)arg2 ;
@end

