/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)reason;
-(NSDictionary *)payload;
-(NSString *)service;
-(NSNumber *)command;
-(NSString *)guid;
-(id)initWithReason:(long long)arg1 guid:(id)arg2 service:(id)arg3 additionalInformation:(id)arg4 ;
-(BOOL)shouldReportMetric;
-(BOOL)_shouldReportReason;
-(BOOL)_shouldReportMetricForExternal;
-(NSDictionary *)additionalInfo;
@end

