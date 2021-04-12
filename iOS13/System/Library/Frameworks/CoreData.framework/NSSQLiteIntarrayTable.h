/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class NSString;

@interface NSSQLiteIntarrayTable : NSObject {

	sqlite3_intarrayRef _intarrayTable;
	NSString* _intarrayTableName;

}

@property (assign,nonatomic) sqlite3_intarrayRef intarrayTable;              //@synthesize intarrayTable=_intarrayTable - In the implementation block
@property (nonatomic,retain) NSString * intarrayTableName;                   //@synthesize intarrayTableName=_intarrayTableName - In the implementation block
-(void)dealloc;
-(void)setIntarrayTableName:(NSString *)arg1 ;
-(void)setIntarrayTable:(sqlite3_intarrayRef)arg1 ;
-(sqlite3_intarrayRef)intarrayTable;
-(NSString *)intarrayTableName;
@end

