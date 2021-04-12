/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKWorkoutRouteDataSourceClientInterface.h>
#import <libobjc.A.dylib/HKWorkoutDataSource.h>

@protocol HKWorkoutRouteDataSourceDelegate;
@class NSUUID, HKTaskServerProxyProvider, NSString;

@interface HKWorkoutRouteDataSource : NSObject <_HKXPCExportable, HKWorkoutRouteDataSourceClientInterface, HKWorkoutDataSource> {

	id<HKWorkoutRouteDataSourceDelegate> _delegate;
	NSUUID* _identifier;
	NSUUID* _sessionIdentifier;
	HKTaskServerProxyProvider* _proxyProvider;

}

@property (nonatomic,retain) NSUUID * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSUUID * sessionIdentifier;                                      //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) HKTaskServerProxyProvider * proxyProvider;                       //@synthesize proxyProvider=_proxyProvider - In the implementation block
@property (assign,nonatomic,__weak) id<HKWorkoutRouteDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverIdentifier;
+(id)serverInterface;
+(id)clientInterface;
-(void)connectionInvalidated;
-(void)clientRemote_didUpdateRoute:(id)arg1 ;
-(void)clientRemote_didUpdateElevation:(id)arg1 ;
-(void)clientRemote_didUpdateAltitude:(id)arg1 ;
-(id)initWithWorkoutSession:(id)arg1 ;
-(id<HKWorkoutRouteDataSourceDelegate>)delegate;
-(id)exportedInterface;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(NSUUID *)sessionIdentifier;
-(void)setDelegate:(id<HKWorkoutRouteDataSourceDelegate>)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(HKTaskServerProxyProvider *)proxyProvider;
-(void)workoutBuilderDidFinish;
@end

