/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NFUnfairLock, NSMutableArray, NSArray;

@interface FCThreadSafeMutableArray : NSObject {

	NFUnfairLock* _lock;
	NSMutableArray* _array;

}

@property (nonatomic,copy,readonly) NSArray * readOnlyArray; 
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)readOnlyArray;
@end

