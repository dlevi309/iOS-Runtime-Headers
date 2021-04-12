/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWSessionManager.h>

@protocol SWSessionManager <NSObject>
@property (nonatomic,readonly) id<SWSession> session; 
@required
-(void)refresh;
-(id<SWSession>)session;

@end


@protocol SWSession, SWScriptsManager, SWLogger;
@class NSString;

@interface SWSessionManager : NSObject <SWSessionManager> {

	id<SWSession> _session;
	id<SWScriptsManager> _scriptsManager;
	id<SWLogger> _logger;

}

@property (nonatomic,readonly) id<SWScriptsManager> scriptsManager;              //@synthesize scriptsManager=_scriptsManager - In the implementation block
@property (nonatomic,readonly) id<SWLogger> logger;                              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<SWSession> session;                            //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)refresh;
-(id<SWSession>)session;
-(id<SWLogger>)logger;
-(id<SWScriptsManager>)scriptsManager;
-(id)initWithScriptsManager:(id)arg1 logger:(id)arg2 ;
@end

