/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/OSLog.framework/OSLog
*/


@class OSLogEventSource;

@interface OSLogStore : NSObject {

	OSLogEventSource* _source;

}
+(id)localStoreAndReturnError:(id*)arg1 ;
+(id)storeWithURL:(id)arg1 error:(id*)arg2 ;
-(id)entriesEnumeratorWithOptions:(unsigned long long)arg1 position:(id)arg2 predicate:(id)arg3 error:(id*)arg4 ;
-(id)entriesEnumeratorAndReturnError:(id*)arg1 ;
-(id)positionWithDate:(id)arg1 ;
-(id)positionWithTimeIntervalSinceEnd:(double)arg1 ;
-(id)positionWithTimeIntervalSinceLatestBoot:(double)arg1 ;
@end

