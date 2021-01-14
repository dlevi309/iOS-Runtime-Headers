/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDIterator.h>

@class NSArray;

@interface WDArrayIterator : WDIterator {

	NSArray* mArray;
	unsigned mNextIndex;

}
-(id)next;
-(BOOL)hasNext;
-(id)initWithArray:(id)arg1 ;
@end

