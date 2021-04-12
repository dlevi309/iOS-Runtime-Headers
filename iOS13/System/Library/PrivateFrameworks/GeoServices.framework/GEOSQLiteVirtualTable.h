/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString;

@interface GEOSQLiteVirtualTable : NSObject {

	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) sqlite3_module* module; 
@property (nonatomic,readonly) NSString * columnDefinitions; 
@property (nonatomic,readonly) unsigned long long rowCount; 
-(id)init;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(unsigned long long)rowCount;
-(NSString *)columnDefinitions;
-(sqlite3_module*)module;
-(void)fetchValueForContext:(sqlite3_contextRef)arg1 row:(unsigned long long)arg2 column:(unsigned long long)arg3 ;
@end

