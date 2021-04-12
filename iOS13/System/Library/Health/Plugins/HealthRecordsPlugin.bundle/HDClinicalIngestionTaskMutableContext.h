/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <HealthRecordsPlugin/HDClinicalIngestionTaskContext.h>

@class NSString, NSFileHandle;

@interface HDClinicalIngestionTaskMutableContext : HDClinicalIngestionTaskContext {

	unsigned long long options;
	NSString* reason;

}

@property (assign,nonatomic) unsigned long long options; 
@property (nonatomic,copy) NSString * reason; 
@property (nonatomic,retain) NSFileHandle * inputFileHandle; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(NSString *)reason;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)setInputFileHandle:(NSFileHandle *)arg1 ;
@end

