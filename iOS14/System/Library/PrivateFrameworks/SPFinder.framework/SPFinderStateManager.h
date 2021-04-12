/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
*/

#import <SPFinder/SPFinderStateManagement.h>

@protocol SPFinderStateXPCProtocol, OS_dispatch_queue;
@class FMXPCServiceDescription, FMXPCSession, NSObject, NSString;

@interface SPFinderStateManager : NSObject <SPFinderStateManagement> {

	/*^block*/id stateInfoChangedBlock;
	/*^block*/id _stateChangedBlock;
	FMXPCServiceDescription* _serviceDescription;
	FMXPCSession* _session;
	id<SPFinderStateXPCProtocol> _proxy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;              //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<SPFinderStateXPCProtocol> proxy;                        //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id stateChangedBlock;                                        //@synthesize stateChangedBlock=_stateChangedBlock - In the implementation block
@property (nonatomic,copy) id stateInfoChangedBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProxy:(id<SPFinderStateXPCProtocol>)arg1 ;
-(id<SPFinderStateXPCProtocol>)proxy;
-(id)init;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(void)setStateChangedBlock:(id)arg1 ;
-(id)stateChangedBlock;
-(FMXPCServiceDescription *)serviceDescription;
-(void)start;
-(id)remoteInterface;
-(FMXPCSession *)session;
-(id)stateInfoChangedBlock;
-(void)enableFinderModeWithCompletion:(/*^block*/id)arg1 ;
-(void)setSession:(FMXPCSession *)arg1 ;
-(void)updateStateBlock;
-(void)stateInfoWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setActiveCache:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableFinderModeWithCompletion:(/*^block*/id)arg1 ;
-(void)setStateInfoChangedBlock:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)fetchFinderState:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

