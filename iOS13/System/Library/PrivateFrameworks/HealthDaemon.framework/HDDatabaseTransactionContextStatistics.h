/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSMutableArray, NSArray, NSString;

@interface HDDatabaseTransactionContextStatistics : NSObject {

	NSMutableArray* _transactions;

}

@property (nonatomic,copy,readonly) NSArray * transactions; 
@property (nonatomic,readonly) double totalDuration; 
@property (nonatomic,copy,readonly) NSString * shortDescription; 
-(id)init;
-(NSString *)shortDescription;
-(double)totalDuration;
-(NSArray *)transactions;
-(void)_addTransactionStatistics:(id)arg1 ;
@end

