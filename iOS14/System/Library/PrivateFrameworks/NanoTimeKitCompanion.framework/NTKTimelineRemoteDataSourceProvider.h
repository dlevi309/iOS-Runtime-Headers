/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/TLTimelineDataSourceProvider.h>

@class NTKTimelineDataSourceWrapper, NSOperationQueue, NSString;

@interface NTKTimelineRemoteDataSourceProvider : NSObject <TLTimelineDataSourceProvider> {

	NTKTimelineDataSourceWrapper* _wrapper;
	NSOperationQueue* _operationQueue;
	double _timeout;

}

@property (nonatomic,readonly) NTKTimelineDataSourceWrapper * wrapper;                //@synthesize wrapper=_wrapper - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                     //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) double timeout;                                        //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) id<CLKComplicationDataSource> dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSOperationQueue *)operationQueue;
-(id)initWithDataSource:(id)arg1 ;
-(id<CLKComplicationDataSource>)dataSource;
-(double)timeout;
-(NTKTimelineDataSourceWrapper *)wrapper;
-(void)getCurrentEntryForComplication:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getEntriesForComplication:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)tl_getDataSourceWithCompletion:(/*^block*/id)arg1 ;
@end

