/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

@class IMDiMessageIDSTrustedData, NSString, NSNumber;


@protocol IMPlayedReceiptProcessingParameter <IMPipelineParameter>
@property (nonatomic,readonly) IMDiMessageIDSTrustedData * idsTrustedData; 
@property (nonatomic,readonly) NSString * GUID; 
@property (nonatomic,readonly) NSNumber * timestamp; 
@property (nonatomic,readonly) BOOL isFromStorage; 
@property (nonatomic,readonly) BOOL isLastFromStorage; 
@property (nonatomic,readonly) BOOL isFromDefaultPairedDevice; 
@required
-(NSNumber *)timestamp;
-(void)setChat:(id)arg1;
-(BOOL)isFromDefaultPairedDevice;
-(NSString *)GUID;
-(BOOL)isFromStorage;
-(BOOL)isLastFromStorage;
-(void)setMessageItems:(id)arg1;
-(IMDiMessageIDSTrustedData *)idsTrustedData;

@end

