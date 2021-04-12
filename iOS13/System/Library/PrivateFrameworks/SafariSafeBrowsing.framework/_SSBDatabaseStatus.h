/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

