/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <Foundation/NSOperation.h>

@class NSError, NSDate, HDProfile;

@interface HDClinicalIngestionNewRecordsCheckOperation : NSOperation {

	BOOL _hasNewRecords;
	NSError* _error;
	NSDate* _startTime;
	HDProfile* _profile;

}

@property (nonatomic,copy,readonly) NSDate * startTime;               //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy,readonly) HDProfile * profile;              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) BOOL hasNewRecords;                    //@synthesize hasNewRecords=_hasNewRecords - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                  //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)main;
-(HDProfile *)profile;
-(NSDate *)startTime;
-(BOOL)hasNewRecords;
-(id)initWithProfile:(id)arg1 startTime:(id)arg2 ;
@end

