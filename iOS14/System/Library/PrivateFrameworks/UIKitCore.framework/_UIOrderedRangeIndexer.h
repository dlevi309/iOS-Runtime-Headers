/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)indexOfRangeContainingLocation:(long long)arg1 ;
-(NSArray *)orderedRanges;
-(NSRange)rangeContainingLocation:(long long)arg1 ;
-(id)description;
-(NSRange)containingRange;
-(NSRange)rangeAtIndex:(long long)arg1 ;
-(long long)numberOfRanges;
-(void)appendRange:(NSRange)arg1 ;
@end

