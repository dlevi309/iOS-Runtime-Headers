/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSError, NSSet;

@interface FCFetchOperationResult : NSObject {

	id _fetchedObject;
	unsigned long long _status;
	unsigned long long _fetchResult;
	NSError* _error;
	NSSet* _missingObjectDescriptions;

}

@property (nonatomic,copy) NSSet * missingObjectDescriptions;               //@synthesize missingObjectDescriptions=_missingObjectDescriptions - In the implementation block
@property (nonatomic,readonly) id fetchedObject;                            //@synthesize fetchedObject=_fetchedObject - In the implementation block
@property (nonatomic,readonly) unsigned long long status;                   //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned long long fetchResult;              //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL anyMissingObjects; 
+(id)resultWithStatus:(unsigned long long)arg1 fetchedObject:(id)arg2 error:(id)arg3 ;
-(NSError *)error;
-(unsigned long long)status;
-(unsigned long long)fetchResult;
-(id)fetchedObject;
-(BOOL)anyMissingObjects;
-(NSSet *)missingObjectDescriptions;
-(void)setMissingObjectDescriptions:(NSSet *)arg1 ;
-(id)initWithStatus:(unsigned long long)arg1 fetchedObject:(id)arg2 fetchResult:(unsigned long long)arg3 error:(id)arg4 ;
@end

