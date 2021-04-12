/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setStopBlock:(id)arg1 ;
-(id)stopBlock;
-(void)stopExtendingLifetime;
-(NSString *)prettyDescription;
-(int)requestEffectivePID;
-(void)setRequestEffectivePID:(int)arg1 ;
-(void)setPrettyDescription:(NSString *)arg1 ;
@end

