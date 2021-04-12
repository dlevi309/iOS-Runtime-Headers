/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
*/


@class NSString, NSError;

@interface CalReminderMigrationFailure : NSObject {

	NSString* _failureDescription;
	unsigned long long _stage;
	NSError* _underlyingError;
	NSString* _relatedPath;

}

@property (nonatomic,copy,readonly) NSString * failureDescription;              //@synthesize failureDescription=_failureDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long stage;                        //@synthesize stage=_stage - In the implementation block
@property (nonatomic,copy,readonly) NSError * underlyingError;                  //@synthesize underlyingError=_underlyingError - In the implementation block
@property (nonatomic,copy,readonly) NSString * relatedPath;                     //@synthesize relatedPath=_relatedPath - In the implementation block
+(id)_labelForStage:(unsigned long long)arg1 ;
-(unsigned long long)stage;
-(NSError *)underlyingError;
-(id)description;
-(NSString *)failureDescription;
-(NSString *)relatedPath;
-(id)initWithDescription:(id)arg1 stage:(unsigned long long)arg2 underlyingError:(id)arg3 relatedPath:(id)arg4 ;
@end

