/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <DiagnosticRequestService/DRSRequest.h>

@class NSString;

@interface DRSSubmitLogRequest : DRSRequest {

	BOOL _transferOwnership;
	NSString* _sandboxExtension;

}

@property (nonatomic,readonly) NSString * sandboxExtension;              //@synthesize sandboxExtension=_sandboxExtension - In the implementation block
@property (nonatomic,readonly) BOOL transferOwnership;                   //@synthesize transferOwnership=_transferOwnership - In the implementation block
+(id)entityName;
+(Class)_moClass;
-(id)initWithXPCDict:(id)arg1 ;
-(id)requestType;
-(NSString *)sandboxExtension;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(void)_configureRequestMO:(id)arg1 ;
-(unsigned long long)expectedType;
-(id)_initWithSubmitLogRequestMO_ON_MOC_QUEUE:(id)arg1 ;
-(id)_metadataDescription;
-(BOOL)performOnReceiptWork:(id)arg1 dampeningOutcome:(unsigned long long)arg2 ;
-(BOOL)transferOwnership;
@end

