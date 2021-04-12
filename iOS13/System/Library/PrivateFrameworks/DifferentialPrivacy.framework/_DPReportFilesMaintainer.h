/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <libobjc.A.dylib/_DPMaintenance.h>

@class NSString;

@interface _DPReportFilesMaintainer : NSObject <_DPMaintenance> {

	NSString* _reportsDirectoryPath;

}

@property (nonatomic,copy) NSString * reportsDirectoryPath;              //@synthesize reportsDirectoryPath=_reportsDirectoryPath - In the implementation block
+(id)reportsInDirectory:(id)arg1 ;
+(id)retiredReportsPath:(id)arg1 ;
+(BOOL)removeFilesFrom:(id)arg1 olderThanSecond:(double)arg2 ;
+(BOOL)retireFiles:(id)arg1 toDirectory:(id)arg2 ;
-(id)init;
-(id)initWithDirectoryPath:(id)arg1 ;
-(void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2 ;
-(NSString *)reportsDirectoryPath;
-(void)setReportsDirectoryPath:(NSString *)arg1 ;
-(BOOL)doMaintenance;
@end

