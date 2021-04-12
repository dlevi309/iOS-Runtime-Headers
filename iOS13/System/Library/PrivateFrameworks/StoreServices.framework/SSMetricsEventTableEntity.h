/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSSQLiteEntity.h>

@class NSDictionary;

@interface SSMetricsEventTableEntity : SSSQLiteEntity {

	NSDictionary* _reportingDictionary;

}
+(id)databaseTable;
-(void)dealloc;
-(id)reportingDictionary;
-(id)reportingCanaryIdentifier;
-(id)reportingJSON;
@end

