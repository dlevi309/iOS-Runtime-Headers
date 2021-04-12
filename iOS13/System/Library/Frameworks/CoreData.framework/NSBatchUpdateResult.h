/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentStoreResult.h>

@interface NSBatchUpdateResult : NSPersistentStoreResult {

	id _aggregatedResult;
	unsigned long long _resultType;

}

@property (readonly) id result;                                  //@synthesize aggregatedResult=_aggregatedResult - In the implementation block
@property (readonly) unsigned long long resultType;              //@synthesize resultType=_resultType - In the implementation block
-(void)dealloc;
-(id)result;
-(unsigned long long)resultType;
-(id)initWithResultType:(unsigned long long)arg1 andObject:(id)arg2 ;
-(id)initWithSubresults:(id)arg1 ;
@end

