/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentStoreResult.h>

@interface NSPersistentHistoryResult : NSPersistentStoreResult {

	id _aggregatedResult;
	long long _resultType;

}

@property (readonly) id result;                         //@synthesize aggregatedResult=_aggregatedResult - In the implementation block
@property (readonly) long long resultType;              //@synthesize resultType=_resultType - In the implementation block
-(void)dealloc;
-(id)description;
-(id)result;
-(long long)resultType;
-(id)initWithResultType:(long long)arg1 andResult:(id)arg2 ;
-(id)initWithSubresults:(id)arg1 ;
@end

