/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NFUnfairLock, NSMutableArray, NSArray;

@interface FCThreadSafeMutableArray : NSObject {

	NFUnfairLock* _lock;
	NSMutableArray* _array;

}

@property (nonatomic,copy,readonly) NSArray * readOnlyArray; 
-(id)init;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(NSArray *)readOnlyArray;
-(void)readWriteWithAccessor:(/*^block*/id)arg1 ;
@end

