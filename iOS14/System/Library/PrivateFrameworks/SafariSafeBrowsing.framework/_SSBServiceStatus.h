/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
*/


#import <SafariSafeBrowsing/SafariSafeBrowsing-Structs.h>
@class NSString, NSArray;

@interface _SSBServiceStatus : NSObject {

	ServiceStatus* _serviceStatus;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (readonly) int processIdentifier; 
@property (nonatomic,copy,readonly) NSArray * activeTransactions; 
@property (nonatomic,readonly) NSArray * databaseUpdatersStatuses; 
@property (nonatomic,readonly) unsigned long long connectionCount; 
@property (nonatomic,readonly) unsigned long long databaseUpdaterState; 
-(int)processIdentifier;
-(unsigned long long)connectionCount;
-(NSString *)name;
-(id)initWithServiceStatus:(ServiceStatus*)arg1 ;
-(int)processIdentifierForConnectionAtIndex:(unsigned long long)arg1 ;
-(id)bundleIdentifierForConnectionAtIndex:(unsigned long long)arg1 ;
-(NSArray *)databaseUpdatersStatuses;
-(unsigned long long)databaseUpdaterState;
-(NSArray *)activeTransactions;
@end

