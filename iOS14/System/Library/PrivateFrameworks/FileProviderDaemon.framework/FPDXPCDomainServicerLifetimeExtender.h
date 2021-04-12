/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <libobjc.A.dylib/FPDLifetimeExtender.h>
#import <libobjc.A.dylib/FPDLifetimeServicing.h>

@class NSString;

@interface FPDXPCDomainServicerLifetimeExtender : NSObject <FPDLifetimeExtender, FPDLifetimeServicing> {

	int _requestEffectivePID;
	NSString* _prettyDescription;
	/*^block*/id _stopBlock;

}

@property (assign) int requestEffectivePID;                         //@synthesize requestEffectivePID=_requestEffectivePID - In the implementation block
@property (retain) NSString * prettyDescription;                    //@synthesize prettyDescription=_prettyDescription - In the implementation block
@property (nonatomic,copy) id stopBlock;                            //@synthesize stopBlock=_stopBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)prettyDescription;
-(void)stopExtendingLifetime;
-(id)stopBlock;
-(void)setStopBlock:(id)arg1 ;
-(int)requestEffectivePID;
-(void)setRequestEffectivePID:(int)arg1 ;
-(void)setPrettyDescription:(NSString *)arg1 ;
@end

