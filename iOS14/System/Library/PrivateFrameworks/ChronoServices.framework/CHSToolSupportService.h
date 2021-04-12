/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/


@protocol CHSChronoToolServiceServer;
@interface CHSToolSupportService : NSObject {

	id<CHSChronoToolServiceServer> _server;

}

@property (nonatomic,readonly) id<CHSChronoToolServiceServer> server;              //@synthesize server=_server - In the implementation block
-(id)init;
-(void)cacheDescriptorsForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableWakeBudgetWithCompletion:(/*^block*/id)arg1 ;
-(void)disableWakeBudgetForExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)widgetsWithTimelines:(/*^block*/id)arg1 ;
-(void)resetWakeBudgetForExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetCaches:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetWakeBudgetWithCompletion:(/*^block*/id)arg1 ;
-(void)listStateCaptureIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)wakesRemainingForExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchStateWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchStateForItemWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)timelineForWidgetKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithServer:(id)arg1 ;
-(id<CHSChronoToolServiceServer>)server;
@end

