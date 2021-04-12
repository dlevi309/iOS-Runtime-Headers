/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

@class NSArray, NSDictionary;


@protocol ECTransferMessageActionResultsBuilder <ECLocalMessageActionResultsBuilder>
@property (assign,nonatomic) long long phaseForResults; 
@property (nonatomic,copy) NSArray * completedItems; 
@property (nonatomic,copy) NSArray * failedItems; 
@property (nonatomic,copy) NSArray * createdServerMessages; 
@property (nonatomic,copy) NSDictionary * downloadedDataByCopyItems; 
@required
-(NSArray *)completedItems;
-(void)setCompletedItems:(id)arg1;
-(void)setPhaseForResults:(long long)arg1;
-(void)setFailedItems:(id)arg1;
-(void)setCreatedServerMessages:(id)arg1;
-(void)setDownloadedDataByCopyItems:(id)arg1;
-(long long)phaseForResults;
-(NSArray *)failedItems;
-(NSArray *)createdServerMessages;
-(NSDictionary *)downloadedDataByCopyItems;

@end

