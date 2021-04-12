/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class NSDate;

@interface _EDThreadScopeInfo : NSObject {

	BOOL _needsUpdate;
	long long _databaseID;
	NSDate* _lastViewedDate;

}

@property (nonatomic,readonly) long long databaseID;               //@synthesize databaseID=_databaseID - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                     //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (nonatomic,retain) NSDate * lastViewedDate;              //@synthesize lastViewedDate=_lastViewedDate - In the implementation block
-(id)description;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(void)setLastViewedDate:(NSDate *)arg1 ;
-(NSDate *)lastViewedDate;
-(long long)databaseID;
-(id)initWithDatabaseID:(long long)arg1 needsUpdate:(BOOL)arg2 lastViewedDate:(id)arg3 ;
@end

