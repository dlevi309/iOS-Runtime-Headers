/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(sqlite3_module*)module;
-(void)fetchValueForContext:(sqlite3_contextRef)arg1 row:(unsigned long long)arg2 column:(unsigned long long)arg3 ;
-(NSString *)columnDefinitions;
-(unsigned long long)rowCount;
@end

