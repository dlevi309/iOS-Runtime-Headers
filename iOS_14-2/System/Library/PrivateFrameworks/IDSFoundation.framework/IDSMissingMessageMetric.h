/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class NSString, NSDictionary, NSNumber;

@interface IDSMissingMessageMetric : NSObject {

	long long _reason;
	NSString* _guid;
	NSString* _service;
	NSDictionary* _additionalInfo;

}

@property (nonatomic,readonly) long long reason;                           //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSString * guid;                            //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) NSString * service;                         //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalInfo;              //@synthesize additionalInfo=_additionalInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * payload; 
@property (nonatomic,readonly) NSNumber * command; 
-(NSString *)guid;
-(NSDictionary *)payload;
-(long long)reason;
-(BOOL)_shouldReportReason;
-(BOOL)_shouldReportMetricForExternal;
-(BOOL)_shouldReportReasonForExternal;
-(NSDictionary *)additionalInfo;
-(BOOL)_isInternal;
-(NSNumber *)command;
-(NSString *)service;
-(id)initWithReason:(long long)arg1 guid:(id)arg2 service:(id)arg3 additionalInformation:(id)arg4 ;
-(BOOL)shouldReportMetric;
@end

