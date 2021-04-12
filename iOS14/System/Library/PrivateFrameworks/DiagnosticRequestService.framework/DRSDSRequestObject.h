/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

@class NSUUID, PBRequest, NSString;


@protocol DRSDSRequestObject <NSObject>
@property (nonatomic,readonly) NSUUID * uniqueID; 
@property (nonatomic,readonly) PBRequest * pbRequest; 
@property (nonatomic,readonly) id<DRSDecisionServerBatchRequest> pbBatchInstance; 
@property (nonatomic,readonly) Class pbBatchResponseClass; 
@property (nonatomic,readonly) NSString * functionName; 
@required
-(NSUUID *)uniqueID;
-(NSString *)functionName;
-(PBRequest *)pbRequest;
-(id<DRSDecisionServerBatchRequest>)pbBatchInstance;
-(Class)pbBatchResponseClass;

@end

