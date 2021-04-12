/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id stateInfoChangedBlock; 
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)start;
-(FMXPCSession *)session;
-(void)setSession:(FMXPCSession *)arg1 ;
-(void)setProxy:(id<SPFinderStateXPCProtocol>)arg1 ;
-(id<SPFinderStateXPCProtocol>)proxy;
-(FMXPCServiceDescription *)serviceDescription;
-(id)remoteInterface;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(id)stateChangedBlock;
-(void)setStateChangedBlock:(id)arg1 ;
-(void)fetchFinderState:(/*^block*/id)arg1 ;
-(void)enableFinderModeWithCompletion:(/*^block*/id)arg1 ;
-(void)disableFinderModeWithCompletion:(/*^block*/id)arg1 ;
-(void)stateInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)setActiveCache:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateStateBlock;
-(id)stateInfoChangedBlock;
-(void)setStateInfoChangedBlock:(id)arg1 ;
@end

