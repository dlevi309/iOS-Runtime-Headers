/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(sqlite3_intarrayRef)intarrayTable;
-(void)setIntarrayTableName:(NSString *)arg1 ;
-(NSString *)intarrayTableName;
-(void)setIntarrayTable:(sqlite3_intarrayRef)arg1 ;
-(void)dealloc;
@end

