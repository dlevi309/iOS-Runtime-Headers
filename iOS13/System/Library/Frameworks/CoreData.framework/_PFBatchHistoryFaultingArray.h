/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/_PFBatchFaultingArray.h>

@class NSPersistentHistoryTransaction;

@interface _PFBatchHistoryFaultingArray : _PFBatchFaultingArray {

	NSPersistentHistoryTransaction* _transaction;

}
+(Class)classForKeyedUnarchiver;
-(Class)classForCoder;
-(Class)classForArchiver;
-(void)_setTransaction:(id)arg1 ;
-(id)transaction;
-(id)initWithPFBatchFaultingArray:(id)arg1 ;
@end

