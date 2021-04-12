/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray;

@interface _UIOrderedRangeIndexer : NSObject {

	shared_ptr<_UIOrderedRangeIndexerImpl>* _orderedRangeIndexerImpl;

}

@property (nonatomic,readonly) long long numberOfRanges; 
@property (nonatomic,readonly) NSArray * orderedRanges; 
@property (nonatomic,readonly) NSRange containingRange; 
-(id)init;
-(id)description;
-(NSRange)rangeAtIndex:(long long)arg1 ;
-(long long)numberOfRanges;
-(long long)indexOfRangeContainingLocation:(long long)arg1 ;
-(void)appendRange:(NSRange)arg1 ;
-(NSArray *)orderedRanges;
-(NSRange)rangeContainingLocation:(long long)arg1 ;
-(NSRange)containingRange;
@end

