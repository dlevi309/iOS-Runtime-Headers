/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <Stocks/Stocks-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface SCKZoneDiff : NSObject <NSCopying> {

	NSArray* _modifiedRecords;
	NSArray* _deletedRecordIDs;

}

@property (nonatomic,copy,readonly) NSArray * modifiedRecords;               //@synthesize modifiedRecords=_modifiedRecords - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deletedRecordIDs;              //@synthesize deletedRecordIDs=_deletedRecordIDs - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(NSArray *)modifiedRecords;
-(NSArray *)deletedRecordIDs;
-(id)initWithModifiedRecords:(id)arg1 deletedRecordIDs:(id)arg2 ;
-(id)applyToRecords:(id)arg1 ;
-(void)applyToModifyRecordsOperation:(id)arg1 ;
-(BOOL)hasSameBaseAsDiff:(id)arg1 ;
@end

