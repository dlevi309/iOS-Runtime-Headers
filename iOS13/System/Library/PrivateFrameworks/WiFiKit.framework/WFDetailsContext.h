/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <libobjc.A.dylib/WFDetailsProviderContext.h>
#import <libobjc.A.dylib/WFContextPresenting.h>

@protocol WFNetworkView;
@class NSArray, UIViewController, WFNetworkProfile, WFIPMonitor, WFNetworkScanRecord, WFKnownNetworkStore, WFDiagnosticsContext, NSString;

@interface WFDetailsContext : NSObject <WFDetailsProviderContext, WFContextPresenting> {

	BOOL _autoJoinEnabled;
	BOOL _autoLoginEnabled;
	BOOL _isInSaveDataMode;
	BOOL _diagnosable;
	BOOL _current;
	BOOL _supportsAirportManagement;
	BOOL _knownNetwork;
	UIViewController*<WFNetworkView> _provider;
	/*^block*/id _actionHandler;
	NSArray* _recommendations;
	WFNetworkProfile* _profile;
	WFIPMonitor* _ipMonitor;
	WFNetworkScanRecord* _network;
	long long _requestedFields;
	WFKnownNetworkStore* _knownNetworkStore;
	WFDiagnosticsContext* _diagnosticsContext;

}

@property (nonatomic,retain) WFNetworkProfile * profile;                                    //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * network;                                 //@synthesize network=_network - In the implementation block
@property (assign,nonatomic) long long requestedFields;                                     //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,retain) WFKnownNetworkStore * knownNetworkStore;                       //@synthesize knownNetworkStore=_knownNetworkStore - In the implementation block
@property (assign,getter=isKnownNetwork,nonatomic) BOOL knownNetwork;                       //@synthesize knownNetwork=_knownNetwork - In the implementation block
@property (nonatomic,retain) WFIPMonitor * ipMonitor;                                       //@synthesize ipMonitor=_ipMonitor - In the implementation block
@property (nonatomic,retain) WFDiagnosticsContext * diagnosticsContext;                     //@synthesize diagnosticsContext=_diagnosticsContext - In the implementation block
@property (nonatomic,copy) id actionHandler;                                                //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,retain) NSArray * recommendations;                                     //@synthesize recommendations=_recommendations - In the implementation block
@property (assign) BOOL diagnosable;                                                        //@synthesize diagnosable=_diagnosable - In the implementation block
@property (assign,getter=isCurrent,nonatomic) BOOL current;                                 //@synthesize current=_current - In the implementation block
@property (assign,nonatomic) BOOL supportsAirportManagement;                                //@synthesize supportsAirportManagement=_supportsAirportManagement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL autoJoinEnabled;                                          //@synthesize autoJoinEnabled=_autoJoinEnabled - In the implementation block
@property (assign,nonatomic) BOOL autoLoginEnabled;                                         //@synthesize autoLoginEnabled=_autoLoginEnabled - In the implementation block
@property (assign,nonatomic) BOOL isInSaveDataMode;                                         //@synthesize isInSaveDataMode=_isInSaveDataMode - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<WFNetworkView> provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) BOOL needsDismissal; 
-(void)dealloc;
-(NSString *)description;
-(void)cancel;
-(void)setProvider:(UIViewController*<WFNetworkView>)arg1 ;
-(WFNetworkScanRecord *)network;
-(void)setNetwork:(WFNetworkScanRecord *)arg1 ;
-(WFNetworkProfile *)profile;
-(void)setProfile:(WFNetworkProfile *)arg1 ;
-(UIViewController*<WFNetworkView>)provider;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
-(void)setCurrent:(BOOL)arg1 ;
-(BOOL)isCurrent;
-(long long)requestedFields;
-(void)setRequestedFields:(long long)arg1 ;
-(void)join;
-(void)manage;
-(void)setAutoJoinEnabled:(BOOL)arg1 ;
-(void)setAutoLoginEnabled:(BOOL)arg1 ;
-(BOOL)isInSaveDataMode;
-(void)setIsInSaveDataMode:(BOOL)arg1 ;
-(WFKnownNetworkStore *)knownNetworkStore;
-(WFIPMonitor *)ipMonitor;
-(id)initWithNetwork:(id)arg1 profile:(id)arg2 knownNetworkStore:(id)arg3 ipMonitor:(id)arg4 ;
-(void)setDiagnosable:(BOOL)arg1 ;
-(void)setRecommendations:(NSArray *)arg1 ;
-(void)setSupportsAirportManagement:(BOOL)arg1 ;
-(void)renewLease;
-(NSArray *)recommendations;
-(BOOL)needsDismissal;
-(void)setKnownNetworkStore:(WFKnownNetworkStore *)arg1 ;
-(void)setIpMonitor:(WFIPMonitor *)arg1 ;
-(BOOL)isKnownNetwork;
-(void)forget;
-(void)openRecommendationLink;
-(WFDiagnosticsContext *)diagnosticsContext;
-(BOOL)diagnosable;
-(BOOL)autoJoinEnabled;
-(BOOL)autoLoginEnabled;
-(BOOL)supportsAirportManagement;
-(void)setKnownNetwork:(BOOL)arg1 ;
-(void)setDiagnosticsContext:(WFDiagnosticsContext *)arg1 ;
@end

