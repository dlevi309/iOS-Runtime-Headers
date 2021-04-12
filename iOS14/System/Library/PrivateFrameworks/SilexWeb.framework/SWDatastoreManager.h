/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWDatastoreManager.h>
@class SWDatastore;


@protocol SWDatastoreManager <NSObject>
@property (nonatomic,readonly) SWDatastore * datastore; 
@required
-(SWDatastore *)datastore;
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(void)updateDatastore:(id)arg1 originatingSession:(id)arg2;

@end


@protocol SWLogger;
@class SWDatastore, NSHashTable, NSString;

@interface SWDatastoreManager : NSObject <SWDatastoreManager> {

	SWDatastore* _datastore;
	NSHashTable* _observers;
	id<SWLogger> _logger;

}

@property (nonatomic,readonly) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) id<SWLogger> logger;                  //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) SWDatastore * datastore;              //@synthesize datastore=_datastore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SWDatastore *)datastore;
-(void)addObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(id<SWLogger>)logger;
-(void)removeObserver:(id)arg1 ;
-(void)updateDatastore:(id)arg1 originatingSession:(id)arg2 ;
-(id)initWithDatastore:(id)arg1 logger:(id)arg2 ;
@end

