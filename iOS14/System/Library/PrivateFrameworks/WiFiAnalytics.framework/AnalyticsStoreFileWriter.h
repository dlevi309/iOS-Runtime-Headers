/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/


@class AnalyticsStoreMOHandler;

@interface AnalyticsStoreFileWriter : NSObject {

	AnalyticsStoreMOHandler* _managedObjectHandler;

}

@property (nonatomic,retain) AnalyticsStoreMOHandler * managedObjectHandler;              //@synthesize managedObjectHandler=_managedObjectHandler - In the implementation block
-(id)init;
-(AnalyticsStoreMOHandler *)managedObjectHandler;
-(void)setManagedObjectHandler:(AnalyticsStoreMOHandler *)arg1 ;
-(id)writeAnalyticsStoreToFile;
-(id)batchedWriteAnalyticsStoreToFile:(unsigned long long)arg1 maxAge:(unsigned long long)arg2 ;
-(id)analyticsStoreFileWriterDirectory;
-(id)analyticsStoreFileWriterFilePath;
-(id)stringifyObjectWithPadding:(id)arg1 padding:(id)arg2 padToLength:(unsigned long long)arg3 ;
-(void)stringifyManagedObjectsArray:(id)arg1 titleString:(id*)arg2 dataStringsArray:(id*)arg3 ;
-(id)stringifyRelationship:(id)arg1 name:(id*)arg2 ;
@end

