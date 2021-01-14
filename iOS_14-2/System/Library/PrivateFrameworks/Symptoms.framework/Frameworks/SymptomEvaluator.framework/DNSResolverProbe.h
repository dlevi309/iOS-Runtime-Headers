/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/TestProbe.h>

@protocol BonjourProbeDelegate, DNSResolverProbeErrorDelegate;
@class NSMutableDictionary;

@interface DNSResolverProbe : TestProbe {

	BOOL _includeAWDL;
	id<BonjourProbeDelegate> _bonjourDelegate;
	id<DNSResolverProbeErrorDelegate> _errorDelegate;
	DNSServiceRef_tRef _sharedDNSRef;
	DNSServiceRef_tRef _resolveDNSRef;
	DNSServiceRef_tRef _getAddrInfoDNSRef;
	NSMutableDictionary* _serviceDict;

}

@property (assign,nonatomic) DNSServiceRef_tRef resolveDNSRef;                   //@synthesize resolveDNSRef=_resolveDNSRef - In the implementation block
@property (assign,nonatomic) DNSServiceRef_tRef getAddrInfoDNSRef;               //@synthesize getAddrInfoDNSRef=_getAddrInfoDNSRef - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * serviceDict;                  //@synthesize serviceDict=_serviceDict - In the implementation block
@property (assign,nonatomic) BOOL includeAWDL;                                   //@synthesize includeAWDL=_includeAWDL - In the implementation block
@property (retain) id<BonjourProbeDelegate> bonjourDelegate;                     //@synthesize bonjourDelegate=_bonjourDelegate - In the implementation block
@property (retain) id<DNSResolverProbeErrorDelegate> errorDelegate;              //@synthesize errorDelegate=_errorDelegate - In the implementation block
@property (assign,nonatomic) DNSServiceRef_tRef sharedDNSRef;                    //@synthesize sharedDNSRef=_sharedDNSRef - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(void)stopTest;
-(void)dealloc;
-(BOOL)includeAWDL;
-(void)setIncludeAWDL:(BOOL)arg1 ;
-(void)startDNSResolveFor:(id)arg1 includeAWDL:(BOOL)arg2 ;
-(id<BonjourProbeDelegate>)bonjourDelegate;
-(void)setBonjourDelegate:(id<BonjourProbeDelegate>)arg1 ;
-(id<DNSResolverProbeErrorDelegate>)errorDelegate;
-(void)setErrorDelegate:(id<DNSResolverProbeErrorDelegate>)arg1 ;
-(DNSServiceRef_tRef)sharedDNSRef;
-(void)setSharedDNSRef:(DNSServiceRef_tRef)arg1 ;
-(DNSServiceRef_tRef)resolveDNSRef;
-(void)setResolveDNSRef:(DNSServiceRef_tRef)arg1 ;
-(DNSServiceRef_tRef)getAddrInfoDNSRef;
-(void)setGetAddrInfoDNSRef:(DNSServiceRef_tRef)arg1 ;
-(NSMutableDictionary *)serviceDict;
-(void)setServiceDict:(NSMutableDictionary *)arg1 ;
@end

