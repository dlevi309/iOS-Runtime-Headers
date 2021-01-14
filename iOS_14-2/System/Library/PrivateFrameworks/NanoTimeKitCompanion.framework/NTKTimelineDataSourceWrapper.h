/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/TLTimelineDataSource.h>

@protocol CLKComplicationDataSource;
@class NSString;

@interface NTKTimelineDataSourceWrapper : NSObject <TLTimelineDataSource> {

	id<CLKComplicationDataSource> _dataSource;

}

@property (nonatomic,readonly) id<CLKComplicationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataSource:(id)arg1 ;
-(id<CLKComplicationDataSource>)dataSource;
-(void)tl_getCurrentTimelineEntryForIdentifiable:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)tl_getTimelineEntriesForIdentifiable:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(/*^block*/id)arg4 ;
@end

