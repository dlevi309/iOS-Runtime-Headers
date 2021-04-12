/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSData, NSArray;


@protocol FCMagazinesConfigurationManager <NSObject>
@property (nonatomic,readonly) NSData * magazinesConfigurationData; 
@property (nonatomic,readonly) NSArray * treatmentIDs; 
@property (nonatomic,readonly) NSArray * segmentSetIDs; 
@required
-(NSArray *)treatmentIDs;
-(NSArray *)segmentSetIDs;
-(void)fetchMagazinesConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2;
-(NSData *)magazinesConfigurationData;

@end

