/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/ECLocalMessageActionResults.h>
#import <libobjc.A.dylib/ECTransferMessageActionResultsBuilder.h>

@class NSArray, NSDictionary, NSString, NSError;

@interface ECTransferMessageActionResults : ECLocalMessageActionResults <ECTransferMessageActionResultsBuilder> {

	long long _phaseForResults;
	NSArray* _completedItems;
	NSArray* _failedItems;
	NSArray* _createdServerMessages;
	NSDictionary* _downloadedDataByCopyItems;

}

@property (assign,nonatomic) long long phaseForResults;                           //@synthesize phaseForResults=_phaseForResults - In the implementation block
@property (nonatomic,copy) NSArray * completedItems;                              //@synthesize completedItems=_completedItems - In the implementation block
@property (nonatomic,copy) NSArray * failedItems;                                 //@synthesize failedItems=_failedItems - In the implementation block
@property (nonatomic,copy) NSArray * createdServerMessages;                       //@synthesize createdServerMessages=_createdServerMessages - In the implementation block
@property (nonatomic,copy) NSDictionary * downloadedDataByCopyItems;              //@synthesize downloadedDataByCopyItems=_downloadedDataByCopyItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSError * error; 
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(NSArray *)completedItems;
-(void)setCompletedItems:(NSArray *)arg1 ;
-(void)setPhaseForResults:(long long)arg1 ;
-(void)setFailedItems:(NSArray *)arg1 ;
-(void)setCreatedServerMessages:(NSArray *)arg1 ;
-(void)setDownloadedDataByCopyItems:(NSDictionary *)arg1 ;
-(long long)phaseForResults;
-(NSArray *)failedItems;
-(NSArray *)createdServerMessages;
-(NSDictionary *)downloadedDataByCopyItems;
@end

