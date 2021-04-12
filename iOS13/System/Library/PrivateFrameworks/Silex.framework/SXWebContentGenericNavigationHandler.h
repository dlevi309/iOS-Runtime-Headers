/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SWNavigationHandler.h>

@protocol SXActionManager, SXURLActionFactory;
@class NSString;

@interface SXWebContentGenericNavigationHandler : NSObject <SWNavigationHandler> {

	id<SXActionManager> _actionManager;
	id<SXURLActionFactory> _URLActionFactory;

}

@property (nonatomic,readonly) id<SXActionManager> actionManager;                    //@synthesize actionManager=_actionManager - In the implementation block
@property (nonatomic,readonly) id<SXURLActionFactory> URLActionFactory;              //@synthesize URLActionFactory=_URLActionFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)handleRequest:(id)arg1 ;
-(id<SXActionManager>)actionManager;
-(id)actionForRequest:(id)arg1 ;
-(id<SXURLActionFactory>)URLActionFactory;
-(id)previewViewControllerForRequest:(id)arg1 ;
-(void)commitViewController:(id)arg1 URLRequest:(id)arg2 ;
-(id)initWithActionManager:(id)arg1 URLActionFactory:(id)arg2 ;
@end

