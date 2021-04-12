/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWSessionManager.h>

@protocol SWSessionManager <NSObject>
@property (nonatomic,readonly) id<SWSession> session; 
@required
-(id<SWSession>)session;
-(void)refresh;

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SWSession> session;                            //@synthesize session=_session - In the implementation block
-(id<SWLogger>)logger;
-(id<SWSession>)session;
-(void)refresh;
-(id<SWScriptsManager>)scriptsManager;
-(id)initWithScriptsManager:(id)arg1 logger:(id)arg2 ;
@end

