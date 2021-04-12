/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWDatastoreManager.h>
@class SWDatastore;


@protocol SWDatastoreManager <NSObject>
@property (nonatomic,readonly) SWDatastore * datastore; 
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(SWDatastore *)datastore;
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SWDatastore * datastore;              //@synthesize datastore=_datastore - In the implementation block
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id<SWLogger>)logger;
-(NSHashTable *)observers;
-(SWDatastore *)datastore;
-(void)updateDatastore:(id)arg1 originatingSession:(id)arg2 ;
-(id)initWithDatastore:(id)arg1 logger:(id)arg2 ;
@end

