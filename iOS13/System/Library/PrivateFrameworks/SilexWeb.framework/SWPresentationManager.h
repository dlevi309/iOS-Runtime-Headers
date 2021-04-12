/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWMessageHandler.h>
#import <libobjc.A.dylib/SWPresentationManager.h>

@protocol SWPresentationManager <NSObject>
@property (assign,nonatomic) unsigned long long presentationState; 
@property (readonly,nonatomic) double height; 
@property (copy,nonatomic) id loadBlock; 
@property (copy,nonatomic) id presentableBlock; 
@required
-(double)height;
-(void)refresh;
-(unsigned long long)presentationState;
-(void)setPresentationState:(unsigned long long)arg1;
-(void)onPresentable:(/*^block*/id)arg1;
-(void)onLoad:(/*^block*/id)arg1;
-(id)loadBlock;
-(id)presentableBlock;

@end


@protocol SWScriptsManager, SWLogger;
@class NSString;

@interface SWPresentationManager : NSObject <SWMessageHandler, SWPresentationManager> {

	unsigned long long _presentationState;
	double _height;
	/*^block*/id loadBlock;
	/*^block*/id presentableBlock;
	id<SWScriptsManager> _scriptsManager;
	id<SWLogger> _logger;

}

@property (nonatomic,readonly) id<SWScriptsManager> scriptsManager;                //@synthesize scriptsManager=_scriptsManager - In the implementation block
@property (nonatomic,readonly) id<SWLogger> logger;                                //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long presentationState;                 //@synthesize presentationState=_presentationState - In the implementation block
@property (nonatomic,readonly) double height;                                      //@synthesize height=_height - In the implementation block
@property (setter=onLoad:,nonatomic,copy) id loadBlock; 
@property (setter=onPresentable:,nonatomic,copy) id presentableBlock; 
-(id<SWLogger>)logger;
-(double)height;
-(void)refresh;
-(unsigned long long)presentationState;
-(void)setPresentationState:(unsigned long long)arg1 ;
-(void)onPresentable:(/*^block*/id)arg1 ;
-(void)onLoad:(/*^block*/id)arg1 ;
-(id)loadBlock;
-(id)presentableBlock;
-(id<SWScriptsManager>)scriptsManager;
-(id)descriptionForPresentationState:(unsigned long long)arg1 ;
-(void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2 ;
-(id)initWithWebContentScriptsManager:(id)arg1 messageHandlerManager:(id)arg2 documentStateProvider:(id)arg3 logger:(id)arg4 ;
@end

