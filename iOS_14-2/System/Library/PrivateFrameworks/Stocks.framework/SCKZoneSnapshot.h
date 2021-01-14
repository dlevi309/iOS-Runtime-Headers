/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRecords:(NSArray *)arg1 ;
-(NSArray *)records;
-(SCKZoneSchema *)zoneSchema;
-(id)recordOfType:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)recordsOfType:(id)arg1 ;
-(id)initWithZoneSchema:(id)arg1 records:(id)arg2 ;
-(id)recordOfType:(id)arg1 ;
-(id)descriptionOfContents;
-(NSArray *)allRecords;
-(void)setZoneSchema:(SCKZoneSchema *)arg1 ;
-(BOOL)isEqualToSnapshot:(id)arg1 ;
-(id)recordWithName:(id)arg1 ;
@end

