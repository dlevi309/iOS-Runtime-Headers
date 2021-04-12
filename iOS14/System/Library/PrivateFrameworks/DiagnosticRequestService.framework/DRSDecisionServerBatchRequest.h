/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

@class DRSProtoClientDeviceMetadata, NSMutableArray;


@protocol DRSDecisionServerBatchRequest <NSObject>
@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) DRSProtoClientDeviceMetadata * clientMetadata; 
@property (nonatomic,retain) NSMutableArray * requests; 
@required
-(BOOL)hasClientMetadata;
-(NSMutableArray *)requests;
-(void)setRequests:(id)arg1;
-(void)setClientMetadata:(id)arg1;
-(DRSProtoClientDeviceMetadata *)clientMetadata;

@end

