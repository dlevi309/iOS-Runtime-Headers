/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)fetchResult;
-(BOOL)anyMissingObjects;
-(void)setMissingObjectDescriptions:(NSSet *)arg1 ;
-(NSError *)error;
-(NSSet *)missingObjectDescriptions;
-(id)initWithStatus:(unsigned long long)arg1 fetchedObject:(id)arg2 fetchResult:(unsigned long long)arg3 error:(id)arg4 ;
-(id)fetchedObject;
-(unsigned long long)status;
@end

