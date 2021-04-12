/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setInputFileHandle:(NSFileHandle *)arg1 ;
@end

