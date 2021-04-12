/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary;

@interface MCLoggingPayload : MCPayload {

	NSDictionary* _loggingPayload;

}

@property (nonatomic,readonly) NSDictionary * loggingPayload;              //@synthesize loggingPayload=_loggingPayload - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(BOOL)isAllowedToWriteLogging;
-(NSDictionary *)loggingPayload;
-(id)title;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
@end

