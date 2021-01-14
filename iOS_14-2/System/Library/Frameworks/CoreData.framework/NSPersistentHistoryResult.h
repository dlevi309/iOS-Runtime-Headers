/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentStoreResult.h>

@interface NSPersistentHistoryResult : NSPersistentStoreResult {

	id _aggregatedResult;
	long long _resultType;

}

@property (readonly) id result;                         //@synthesize aggregatedResult=_aggregatedResult - In the implementation block
@property (readonly) long long resultType;              //@synthesize resultType=_resultType - In the implementation block
-(long long)resultType;
-(id)initWithSubresults:(id)arg1 ;
-(id)initWithResultType:(long long)arg1 andResult:(id)arg2 ;
-(id)description;
-(id)result;
-(void)dealloc;
@end

