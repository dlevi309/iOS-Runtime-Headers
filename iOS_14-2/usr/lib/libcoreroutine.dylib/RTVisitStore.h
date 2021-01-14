/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTStore.h>
#import <libobjc.A.dylib/RTEnumerableStore.h>

@class NSString;

@interface RTVisitStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fetchRequestFromOptions:(id)arg1 offset:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_fetchVisitsWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_storeVisit:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_purgeVisitsPredating:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchVisitsWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)storeVisit:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)purgeVisitsPredating:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

