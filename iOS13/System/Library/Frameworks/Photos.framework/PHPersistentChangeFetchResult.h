/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSPersistentHistoryToken, NSArray, NSManagedObjectContext;

@interface PHPersistentChangeFetchResult : NSObject {

	NSPersistentHistoryToken* _initialToken;
	NSArray* _transactions;
	NSManagedObjectContext* _context;
	unsigned long long _maximumChangeThreshold;
	unsigned long long _changeCount;

}

@property (nonatomic,readonly) unsigned long long changeCount;              //@synthesize changeCount=_changeCount - In the implementation block
+(id)fetchResultWithToken:(id)arg1 maximumChangeThreshold:(unsigned long long)arg2 managedObjectObjectContext:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)changeCount;
-(id)initWithInitialToken:(id)arg1 transactions:(id)arg2 maximumChangeThreshold:(unsigned long long)arg3 managedObjectObjectContext:(id)arg4 ;
-(void)enumerateChangesWithBlock:(/*^block*/id)arg1 ;
@end

