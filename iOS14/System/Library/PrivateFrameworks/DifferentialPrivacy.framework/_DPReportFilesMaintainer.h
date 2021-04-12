/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

