/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)deletedRecordIDs;
-(BOOL)hasSameBaseAsDiff:(id)arg1 ;
-(BOOL)isEmpty;
-(NSArray *)modifiedRecords;
-(void)applyToModifyRecordsOperation:(id)arg1 ;
-(id)applyToRecords:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithModifiedRecords:(id)arg1 deletedRecordIDs:(id)arg2 ;
@end

