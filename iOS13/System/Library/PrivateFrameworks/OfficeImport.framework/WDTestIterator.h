/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDIterator.h>

@class WDIterator;

@interface WDTestIterator : WDIterator {

	WDIterator* mIterator;
	id mNext;

}
-(id)next;
-(BOOL)hasNext;
-(id)initWithIterator:(id)arg1 ;
-(BOOL)test:(id)arg1 ;
@end

