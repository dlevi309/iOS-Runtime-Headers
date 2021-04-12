/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKArray.h>

@interface IKMutableArray : IKArray {

	long long _expectedCapacity;

}

@property (nonatomic,readonly) long long expectedCapacity;              //@synthesize expectedCapacity=_expectedCapacity - In the implementation block
-(id)initWithCapacity:(long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeObjectAtIndex:(long long)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)_convertToArrayStore;
-(long long)expectedCapacity;
@end

