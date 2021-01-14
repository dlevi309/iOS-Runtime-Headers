/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
*/


@class BMStreamDatastore, BMStreamsAccessClient;

@interface BMStreamDatastorePruner : NSObject {

	BMStreamDatastore* _inner;
	BMStreamsAccessClient* _accessClient;

}
-(id)newEnumeratorFromBookmark:(id)arg1 ;
-(id)newEnumeratorFromStartTime:(double)arg1 ;
-(Class)eventClass;
-(id)initWithStream:(id)arg1 config:(id)arg2 ;
-(id)streamIdentifier;
-(id)fetchEventsFrom:(double)arg1 to:(double)arg2 ;
-(void)eventsFrom:(double)arg1 to:(double)arg2 shouldDeleteUsingBlock:(/*^block*/id)arg3 ;
-(void)removeEventsFrom:(double)arg1 to:(double)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)removeEventsFrom:(double)arg1 to:(double)arg2 callback:(/*^block*/id)arg3 ;
-(void)syncMappedFiles;
-(void)dealloc;
@end

