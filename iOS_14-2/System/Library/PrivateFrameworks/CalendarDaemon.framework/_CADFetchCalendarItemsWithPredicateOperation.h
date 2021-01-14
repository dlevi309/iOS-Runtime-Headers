/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <Foundation/NSOperation.h>

@class NSPredicate;

@interface _CADFetchCalendarItemsWithPredicateOperation : NSOperation {

	NSPredicate* _predicate;
	int _entityType;
	CalDatabase* _database;
	int _fetchIdentifier;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) int fetchIdentifier;              //@synthesize fetchIdentifier=_fetchIdentifier - In the implementation block
-(id)initWithPredicate:(id)arg1 entityType:(int)arg2 database:(CalDatabase*)arg3 fetchIdentifier:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)main;
-(void)cancel;
-(int)fetchIdentifier;
-(void)dealloc;
@end

