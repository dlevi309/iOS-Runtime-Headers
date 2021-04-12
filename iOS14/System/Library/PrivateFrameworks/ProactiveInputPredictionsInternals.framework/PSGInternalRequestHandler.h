/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictionsInternals.framework/ProactiveInputPredictionsInternals
*/

#import <libobjc.A.dylib/PSGInternalServerProtocol.h>

@protocol PSGInternalServerProtocol;
@class PSGExperimentResolver, NSString, _PASBundleIdResolver;

@interface PSGInternalRequestHandler : NSObject <PSGInternalServerProtocol> {

	id<PSGInternalServerProtocol> _clientProxy;
	PSGExperimentResolver* _experimentResolver;
	NSString* _clientProcessName;
	_PASBundleIdResolver* _bundleIdResolver;

}

@property (nonatomic,copy) NSString * clientProcessName;                           //@synthesize clientProcessName=_clientProcessName - In the implementation block
@property (nonatomic,retain) _PASBundleIdResolver * bundleIdResolver;              //@synthesize bundleIdResolver=_bundleIdResolver - In the implementation block
-(id)init;
-(_PASBundleIdResolver *)bundleIdResolver;
-(NSString *)clientProcessName;
-(void)setClientProcessName:(NSString *)arg1 ;
-(void)setRemoteObjectProxy:(id)arg1 ;
-(void)setBundleIdResolver:(_PASBundleIdResolver *)arg1 ;
-(void)sysdiagnoseInformationWithCompletion:(/*^block*/id)arg1 ;
-(id)_initWithExperimentResolver:(id)arg1 ;
-(id)_getZKWExperimentInfo:(id)arg1 ;
-(id)_getWordBoundaryExperimentInfo:(id)arg1 ;
-(id)_getPreferredLanguages;
@end

