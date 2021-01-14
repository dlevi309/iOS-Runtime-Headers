/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSSQLCore;

@interface NSSQLitePrefetchRequestCache : NSObject {

	NSSQLCore* _sqlCore;
	unsigned long long _length;
	id* _prefetchRequestsByEntity;

}
-(id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)initWithSQLCore:(id)arg1 ;
-(id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(void)dealloc;
@end

