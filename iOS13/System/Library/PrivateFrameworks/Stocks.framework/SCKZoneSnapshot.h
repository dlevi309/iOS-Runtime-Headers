/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <libobjc.A.dylib/SCKZoneReading.h>

@class NSArray, SCKZoneSchema;

@interface SCKZoneSnapshot : NSObject <SCKZoneReading> {

	SCKZoneSchema* _zoneSchema;
	NSArray* _records;

}

@property (nonatomic,retain) SCKZoneSchema * zoneSchema;               //@synthesize zoneSchema=_zoneSchema - In the implementation block
@property (nonatomic,copy) NSArray * records;                          //@synthesize records=_records - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allRecords; 
-(NSArray *)records;
-(void)setRecords:(NSArray *)arg1 ;
-(SCKZoneSchema *)zoneSchema;
-(void)setZoneSchema:(SCKZoneSchema *)arg1 ;
-(id)recordWithName:(id)arg1 ;
-(id)recordOfType:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)recordsOfType:(id)arg1 ;
-(id)recordOfType:(id)arg1 ;
-(NSArray *)allRecords;
-(id)initWithZoneSchema:(id)arg1 records:(id)arg2 ;
-(BOOL)isEqualToSnapshot:(id)arg1 ;
-(id)descriptionOfContents;
@end

