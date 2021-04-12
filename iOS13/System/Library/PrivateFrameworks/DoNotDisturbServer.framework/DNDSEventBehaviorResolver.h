/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <libobjc.A.dylib/DNDSSysdiagnoseDataProvider.h>

@protocol OS_dispatch_queue, DNDSModeRepository, DNDSEventBehaviorResolverDataSource;
@class NSObject, CNContactStore, CNFavorites, NSMutableArray, NSString;

@interface DNDSEventBehaviorResolver : NSObject <DNDSSysdiagnoseDataProvider> {

	NSObject*<OS_dispatch_queue> _queue;
	id<DNDSModeRepository> _modeRepository;
	CNContactStore* _contactStore;
	CNFavorites* _favorites;
	NSMutableArray* _resolutionRecord;
	id<DNDSEventBehaviorResolverDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<DNDSEventBehaviorResolverDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * sysdiagnoseDataIdentifier; 
-(void)dealloc;
-(id<DNDSEventBehaviorResolverDataSource>)dataSource;
-(void)setDataSource:(id<DNDSEventBehaviorResolverDataSource>)arg1 ;
-(id)sysdiagnoseDataForDate:(id)arg1 ;
-(NSString *)sysdiagnoseDataIdentifier;
-(id)_queue_resolveBehaviorForEventDetails:(id)arg1 clientDetails:(id)arg2 date:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)_queue_resolveOutcomeForEventSource:(id)arg1 clientDetails:(id)arg2 date:(id)arg3 reason:(out unsigned long long*)arg4 ;
-(BOOL)_queue_eventSourceIsFavorite:(id)arg1 ;
-(BOOL)_queue_eventSourceIsContact:(id)arg1 ;
-(BOOL)_queue_eventSourceIsContact:(id)arg1 inGroupWithIdentifier:(id)arg2 ;
-(BOOL)_queue_eventSourceIsRepeat:(id)arg1 clientDetails:(id)arg2 date:(id)arg3 ;
-(BOOL)_queue_eventSourceIsEmergencyContact:(id)arg1 ;
-(id)initWithModeRepository:(id)arg1 contactStore:(id)arg2 ;
-(id)resolveBehaviorForEventDetails:(id)arg1 clientDetails:(id)arg2 date:(id)arg3 error:(id*)arg4 ;
@end

