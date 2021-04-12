/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <libobjc.A.dylib/WFCertificateProviderContext.h>
#import <libobjc.A.dylib/WFContextPresenting.h>

@protocol WFNetworkView;
@class NSArray, UIViewController, WFNetworkProfile, WFNetworkScanRecord, NSString;

@interface WFCertificateContext : NSObject <WFCertificateProviderContext, WFContextPresenting> {

	long long _requestedFields;
	NSArray* _certificateChain;
	SecTrustRef _certificateTrust;
	UIViewController*<WFNetworkView> _provider;
	/*^block*/id _completionHandler;
	WFNetworkProfile* _profile;
	WFNetworkScanRecord* _network;

}

@property (nonatomic,retain) NSArray * certificateChain;                                    //@synthesize certificateChain=_certificateChain - In the implementation block
@property (assign,nonatomic) SecTrustRef certificateTrust;                                  //@synthesize certificateTrust=_certificateTrust - In the implementation block
@property (nonatomic,retain) WFNetworkProfile * profile;                                    //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * network;                                 //@synthesize network=_network - In the implementation block
@property (assign,nonatomic) long long requestedFields;                                     //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,copy) id completionHandler;                                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIViewController*<WFNetworkView> provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) BOOL needsDismissal; 
-(void)setProfile:(WFNetworkProfile *)arg1 ;
-(void)setProvider:(UIViewController*<WFNetworkView>)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(UIViewController*<WFNetworkView>)provider;
-(WFNetworkScanRecord *)network;
-(void)accept;
-(id)completionHandler;
-(WFNetworkProfile *)profile;
-(NSArray *)certificateChain;
-(void)cancel;
-(void)setRequestedFields:(long long)arg1 ;
-(void)setNetwork:(WFNetworkScanRecord *)arg1 ;
-(long long)requestedFields;
-(void)dealloc;
-(void)launchSettings;
-(SecTrustRef)certificateTrust;
-(void)setCertificateTrust:(SecTrustRef)arg1 ;
-(void)setCertificateChain:(NSArray *)arg1 ;
-(id)initWithNetwork:(id)arg1 profile:(id)arg2 certificateChain:(id)arg3 ;
-(BOOL)needsDismissal;
@end

