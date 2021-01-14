/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWMessageHandler.h>
#import <libobjc.A.dylib/SWErrorProvider.h>
#import <libobjc.A.dylib/SWErrorReporting.h>

@protocol SWLogger;
@class NSError, NSString;

@interface SWErrorManager : NSObject <SWMessageHandler, SWErrorProvider, SWErrorReporting> {

	NSError* _error;
	/*^block*/id _block;
	id<SWLogger> _logger;

}

@property (nonatomic,readonly) id<SWLogger> logger;                 //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (setter=onError:,nonatomic,copy) id block;                //@synthesize block=_block - In the implementation block
-(id)block;
-(NSError *)error;
-(void)onError:(/*^block*/id)arg1 ;
-(id<SWLogger>)logger;
-(void)reportError:(id)arg1 ;
-(void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2 ;
-(id)initWithMessageHandlerManager:(id)arg1 timeoutManager:(id)arg2 logger:(id)arg3 ;
@end

