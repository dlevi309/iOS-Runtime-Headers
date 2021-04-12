/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

