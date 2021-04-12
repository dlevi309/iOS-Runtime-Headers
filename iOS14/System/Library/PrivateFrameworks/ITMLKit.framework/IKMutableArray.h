/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKArray.h>

@interface IKMutableArray : IKArray {

	long long _expectedCapacity;

}

@property (nonatomic,readonly) long long expectedCapacity;              //@synthesize expectedCapacity=_expectedCapacity - In the implementation block
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(long long)arg2 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(long long)arg1 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeObject:(id)arg1 ;
-(id)initWithCapacity:(long long)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2 ;
-(void)_convertToArrayStore;
-(long long)expectedCapacity;
@end

