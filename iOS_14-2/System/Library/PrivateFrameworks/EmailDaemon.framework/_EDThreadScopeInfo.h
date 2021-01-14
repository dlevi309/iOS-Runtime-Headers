/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(BOOL)needsUpdate;
-(void)setLastViewedDate:(NSDate *)arg1 ;
-(id)description;
-(long long)databaseID;
-(NSDate *)lastViewedDate;
-(id)initWithDatabaseID:(long long)arg1 needsUpdate:(BOOL)arg2 lastViewedDate:(id)arg3 ;
@end

