/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentStoreResult.h>

@interface NSPersistentCloudKitContainerEventResult : NSPersistentStoreResult {

	id _result;
	long long _resultType;

}

@property (readonly) id result;                         //@synthesize result=_result - In the implementation block
@property (readonly) long long resultType;              //@synthesize resultType=_resultType - In the implementation block
+(id)stringForEventResultType:(long long)arg1 ;
-(long long)resultType;
-(id)initWithSubresults:(id)arg1 ;
-(id)result;
-(id)initWithResult:(id)arg1 ofType:(long long)arg2 ;
-(void)dealloc;
@end

