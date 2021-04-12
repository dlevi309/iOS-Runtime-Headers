/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSFileHandle, NSString;

@interface HDClinicalIngestionTaskContext : NSObject <NSCopying, NSMutableCopying> {

	NSFileHandle* _inputFileHandle;
	unsigned long long _options;
	NSString* _reason;

}

@property (nonatomic,readonly) BOOL isBackgroundTask; 
@property (nonatomic,readonly) BOOL shouldFetchImmediately; 
@property (nonatomic,readonly) BOOL shouldSkipGatewaysUpdate; 
@property (nonatomic,readonly) BOOL shouldSkipFetch; 
@property (nonatomic,readonly) BOOL shouldSkipTermbaseUpdate; 
@property (nonatomic,readonly) BOOL shouldSkipIngestionMetricsSubmission; 
@property (nonatomic,readonly) unsigned long long options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSFileHandle * inputFileHandle;                         //@synthesize inputFileHandle=_inputFileHandle - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(NSString *)reason;
-(BOOL)isBackgroundTask;
-(id)initWithOptions:(unsigned long long)arg1 reason:(id)arg2 ;
-(BOOL)shouldFetchImmediately;
-(NSFileHandle *)inputFileHandle;
-(BOOL)shouldSkipFetch;
-(BOOL)shouldSkipGatewaysUpdate;
-(BOOL)shouldSkipTermbaseUpdate;
-(BOOL)shouldSkipIngestionMetricsSubmission;
@end

