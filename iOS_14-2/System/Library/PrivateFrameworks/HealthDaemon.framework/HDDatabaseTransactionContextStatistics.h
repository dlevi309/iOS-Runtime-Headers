/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSMutableArray, NSArray, NSString;

@interface HDDatabaseTransactionContextStatistics : NSObject {

	NSMutableArray* _transactions;

}

@property (nonatomic,copy,readonly) NSArray * transactions; 
@property (nonatomic,readonly) double totalDuration; 
@property (nonatomic,copy,readonly) NSString * shortDescription; 
-(double)totalDuration;
-(id)init;
-(NSArray *)transactions;
-(NSString *)shortDescription;
-(void)_addTransactionStatistics:(id)arg1 ;
@end

