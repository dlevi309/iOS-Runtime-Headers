/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)serverInterface;
+(id)clientInterface;
+(id)serverIdentifier;
-(id<HKWorkoutRouteDataSourceDelegate>)delegate;
-(void)setDelegate:(id<HKWorkoutRouteDataSourceDelegate>)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)exportedInterface;
-(NSUUID *)sessionIdentifier;
-(void)connectionInvalidated;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(HKTaskServerProxyProvider *)proxyProvider;
-(void)workoutBuilderDidFinish;
-(void)clientRemote_didUpdateElevation:(id)arg1 ;
-(void)clientRemote_didUpdateRoute:(id)arg1 ;
-(void)clientRemote_didUpdateAltitude:(id)arg1 ;
-(id)initWithWorkoutSession:(id)arg1 ;
@end

