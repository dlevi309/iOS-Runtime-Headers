/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
*/


#import <SafariSafeBrowsing/SafariSafeBrowsing-Structs.h>
@class NSString;

@interface SSBDatabaseUpdaterStatus : NSObject {

	DatabaseUpdaterStatus _databaseUpdaterStatus;

}

@property (nonatomic,readonly) NSString * provider; 
@property (nonatomic,readonly) unsigned long long databaseUpdaterState; 
-(NSString *)provider;
-(id)_initWithDatabaseUpdaterStatus:(DatabaseUpdaterStatus)arg1 ;
-(unsigned long long)databaseUpdaterState;
@end

