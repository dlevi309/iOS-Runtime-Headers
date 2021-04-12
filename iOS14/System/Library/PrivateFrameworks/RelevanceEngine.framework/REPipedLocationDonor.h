/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RESingleton.h>
#import <libobjc.A.dylib/REPipedLocationReceiver.h>

@protocol OS_dispatch_queue;
@class REObserverStore, NSXPCConnection, NSObject, CLLocation, NSLock, NSString;

@interface REPipedLocationDonor : RESingleton <REPipedLocationReceiver> {

	REObserverStore* _observers;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	CLLocation* _location;
	NSLock* _locationAccessLock;

}

@property (nonatomic,readonly) CLLocation * location; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_locationFromDefaults;
+(void)_saveLocationIntoDefaultsWithLocation:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_handleInvalidation;
-(CLLocation *)location;
-(void)removeObserver:(id)arg1 ;
-(id)_init;
-(void)setConnection:(id)arg1 ;
-(void)updateLocation:(id)arg1 ;
@end

