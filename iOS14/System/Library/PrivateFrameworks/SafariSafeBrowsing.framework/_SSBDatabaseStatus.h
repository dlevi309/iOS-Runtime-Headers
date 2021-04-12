/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
*/


#import <SafariSafeBrowsing/SafariSafeBrowsing-Structs.h>
@interface _SSBDatabaseStatus : NSObject {

	DatabaseStatus* _databaseStatus;

}

@property (nonatomic,readonly) unsigned long long databaseCount; 
-(id)initWithDatabaseStatus:(DatabaseStatus*)arg1 ;
-(unsigned long long)databaseCount;
-(id)nameOfDatabaseAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)sizeOfDatabaseAtIndex:(unsigned long long)arg1 ;
-(unsigned)hashCountOfDatabaseAtIndex:(unsigned long long)arg1 ;
-(id)lastUpdateTimeOfDatabaseAtIndex:(unsigned long long)arg1 ;
-(id)nextPollingTimeOfDatabaseAtIndex:(unsigned long long)arg1 ;
@end

