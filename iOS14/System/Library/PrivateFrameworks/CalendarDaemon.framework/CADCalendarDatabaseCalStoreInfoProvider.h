/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <libobjc.A.dylib/CADCalStoreInfoProvider.h>

@protocol CADDatabaseProvider;
@interface CADCalendarDatabaseCalStoreInfoProvider : NSObject <CADCalStoreInfoProvider> {

	id<CADDatabaseProvider> _databaseProvider;

}

@property (nonatomic,__weak,readonly) id<CADDatabaseProvider> databaseProvider;              //@synthesize databaseProvider=_databaseProvider - In the implementation block
-(id)initWithDatabaseProvider:(id)arg1 ;
-(id<CADDatabaseProvider>)databaseProvider;
-(id)storeInfoList;
@end

