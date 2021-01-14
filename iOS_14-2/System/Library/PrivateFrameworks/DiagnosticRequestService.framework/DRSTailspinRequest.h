/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <DiagnosticRequestService/DRSRequest.h>

@class NSNumber;

@interface DRSTailspinRequest : DRSRequest {

	BOOL _includeOsSignpost;
	BOOL _includeOsLog;
	BOOL _scrubbed;
	NSNumber* _minMAT;
	NSNumber* _maxMAT;

}

@property (nonatomic,readonly) BOOL includeOsSignpost;              //@synthesize includeOsSignpost=_includeOsSignpost - In the implementation block
@property (nonatomic,readonly) BOOL includeOsLog;                   //@synthesize includeOsLog=_includeOsLog - In the implementation block
@property (nonatomic,readonly) BOOL scrubbed;                       //@synthesize scrubbed=_scrubbed - In the implementation block
@property (nonatomic,readonly) NSNumber * minMAT;                   //@synthesize minMAT=_minMAT - In the implementation block
@property (nonatomic,readonly) NSNumber * maxMAT;                   //@synthesize maxMAT=_maxMAT - In the implementation block
+(id)entityName;
+(Class)_moClass;
+(id)requiredSystemResourceName;
+(BOOL)_shouldScrub;
-(id)logType;
-(id)initWithXPCDict:(id)arg1 ;
-(id)requestType;
-(NSNumber *)minMAT;
-(NSNumber *)maxMAT;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(void)_configureRequestMO:(id)arg1 ;
-(unsigned long long)expectedType;
-(id)_initWithTailspinRequestMO_ON_MOC_QUEUE:(id)arg1 ;
-(id)_metadataDescription;
-(BOOL)performOnReceiptWork:(id)arg1 dampeningOutcome:(unsigned long long)arg2 ;
-(BOOL)includeOsLog;
-(BOOL)includeOsSignpost;
-(BOOL)scrubbed;
-(id)_tailspinOptions;
-(BOOL)_dumpTailspinToDirectory:(id)arg1 ;
@end

