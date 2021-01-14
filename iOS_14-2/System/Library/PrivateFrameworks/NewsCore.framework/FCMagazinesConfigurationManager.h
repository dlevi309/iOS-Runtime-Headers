/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSData, NSArray;


@protocol FCMagazinesConfigurationManager <NSObject>
@property (nonatomic,readonly) NSData * magazinesConfigurationData; 
@property (nonatomic,readonly) NSArray * treatmentIDs; 
@property (nonatomic,readonly) NSArray * segmentSetIDs; 
@required
-(NSArray *)segmentSetIDs;
-(NSArray *)treatmentIDs;
-(void)fetchMagazinesConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2;
-(NSData *)magazinesConfigurationData;

@end

