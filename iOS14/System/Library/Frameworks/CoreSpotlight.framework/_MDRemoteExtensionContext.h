/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/_MDExtensionContext.h>
#import <libobjc.A.dylib/_MDRemoteExtensionContextProtocol.h>

@class CSIndexExtensionRequestHandler, NSString;

@interface _MDRemoteExtensionContext : _MDExtensionContext <_MDRemoteExtensionContextProtocol> {

	CSIndexExtensionRequestHandler* _requestHandler;

}

@property (nonatomic,retain) CSIndexExtensionRequestHandler * requestHandler;              //@synthesize requestHandler=_requestHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)hostContext;
-(CSIndexExtensionRequestHandler *)requestHandler;
-(void)getLastUpdateTimeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performJob:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)setRequestHandler:(CSIndexExtensionRequestHandler *)arg1 ;
-(NSString *)description;
-(void)dealloc;
@end

