/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSArray;

@interface REArrayDiff : NSObject {

	NSArray* _allOperations;

}

@property (nonatomic,readonly) NSArray * allOperations;              //@synthesize allOperations=_allOperations - In the implementation block
+(id)diffFromElements:(id)arg1 toElements:(id)arg2 equalComparator:(/*^block*/id)arg3 hashGenerator:(/*^block*/id)arg4 changeComparator:(/*^block*/id)arg5 ;
+(id)_createSetFromElementArray:(id)arg1 equalComparator:(/*^block*/id)arg2 hashGenerator:(/*^block*/id)arg3 ;
+(id)_indexSetFromSet:(id)arg1 ;
+(id)diffFromElements:(id)arg1 toElements:(id)arg2 ;
-(NSArray *)allOperations;
-(void)enumerateOperationsUsingBlock:(/*^block*/id)arg1 ;
@end

