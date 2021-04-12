/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(int)processIdentifier;
-(unsigned long long)connectionCount;
-(NSArray *)activeTransactions;
-(id)initWithServiceStatus:(ServiceStatus*)arg1 ;
-(int)processIdentifierForConnectionAtIndex:(unsigned long long)arg1 ;
-(id)bundleIdentifierForConnectionAtIndex:(unsigned long long)arg1 ;
-(NSArray *)databaseUpdatersStatuses;
-(unsigned long long)databaseUpdaterState;
@end

