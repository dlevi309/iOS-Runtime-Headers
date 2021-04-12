/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSPredicate, NSArray;

@interface FMFetchOptions : NSObject {

	NSPredicate* _predicate;
	NSArray* _sortDescriptors;

}

@property (nonatomic,retain) NSPredicate * predicate;                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
-(NSPredicate *)predicate;
-(id)init;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
@end

