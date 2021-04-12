/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentStoreResult.h>

@interface NSBatchDeleteResult : NSPersistentStoreResult {

	id _aggregatedResult;
	unsigned long long _resultType;

}

@property (readonly) id result;                                  //@synthesize aggregatedResult=_aggregatedResult - In the implementation block
@property (readonly) unsigned long long resultType;              //@synthesize resultType=_resultType - In the implementation block
-(unsigned long long)resultType;
-(id)initWithSubresults:(id)arg1 ;
-(id)result;
-(id)initWithResultType:(unsigned long long)arg1 andObject:(id)arg2 ;
-(void)dealloc;
@end

