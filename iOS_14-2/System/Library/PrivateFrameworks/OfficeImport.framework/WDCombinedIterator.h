/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

