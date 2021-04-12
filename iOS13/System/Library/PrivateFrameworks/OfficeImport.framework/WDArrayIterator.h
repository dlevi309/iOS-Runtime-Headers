/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDIterator.h>

@class NSArray;

@interface WDArrayIterator : WDIterator {

	NSArray* mArray;
	unsigned mNextIndex;

}
-(id)initWithArray:(id)arg1 ;
-(id)next;
-(BOOL)hasNext;
@end

