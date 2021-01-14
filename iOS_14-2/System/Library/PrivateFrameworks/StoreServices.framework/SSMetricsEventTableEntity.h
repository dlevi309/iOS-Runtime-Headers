/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSSQLiteEntity.h>

@class NSDictionary;

@interface SSMetricsEventTableEntity : SSSQLiteEntity {

	NSDictionary* _reportingDictionary;

}
+(id)databaseTable;
-(id)reportingCanaryIdentifier;
-(id)reportingJSON;
-(id)reportingDictionary;
-(void)dealloc;
@end

