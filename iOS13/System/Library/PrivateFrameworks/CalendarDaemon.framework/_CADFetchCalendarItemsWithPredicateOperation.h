/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)cancel;
-(void)main;
-(id)initWithPredicate:(id)arg1 entityType:(int)arg2 database:(CalDatabase*)arg3 fetchIdentifier:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)fetchIdentifier;
@end

