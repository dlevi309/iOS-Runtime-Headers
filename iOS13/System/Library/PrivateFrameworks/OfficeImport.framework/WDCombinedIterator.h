/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDIterator.h>

@class WDIterator;

@interface WDCombinedIterator : WDIterator {

	WDIterator* mParentIterator;
	WDIterator* mChildIterator;

}

@property (nonatomic,retain) WDIterator * childIterator; 
-(id)next;
-(BOOL)hasNext;
-(WDIterator *)childIterator;
-(id)initWithParentIterator:(id)arg1 ;
-(id)childIteratorFrom:(id)arg1 ;
-(id)newChildIteratorFrom:(id)arg1 ;
-(void)incrementChildIterator;
-(void)setChildIterator:(WDIterator *)arg1 ;
@end

