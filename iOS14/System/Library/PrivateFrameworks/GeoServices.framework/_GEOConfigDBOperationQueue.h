/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_source;
@class GEOSQLiteDB, geo_isolater, NSMutableArray, NSObject;

@interface _GEOConfigDBOperationQueue : NSObject {

	GEOSQLiteDB* _db;
	geo_isolater* _isolator;
	NSMutableArray* _operations;
	NSObject*<OS_dispatch_source> _timer;

}
-(void)flush;
-(void)enqueueOperation:(id)arg1 ;
-(void)cancelTimer;
-(void)scheduleTimer;
-(void)dealloc;
-(id)init:(id)arg1 ;
@end

