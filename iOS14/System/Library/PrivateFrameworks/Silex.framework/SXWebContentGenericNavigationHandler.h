/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<SXActionManager>)actionManager;
-(unsigned long long)handleRequest:(id)arg1 ;
-(id<SXURLActionFactory>)URLActionFactory;
-(id)actionForRequest:(id)arg1 ;
-(id)previewViewControllerForRequest:(id)arg1 ;
-(void)commitViewController:(id)arg1 URLRequest:(id)arg2 ;
-(id)initWithActionManager:(id)arg1 URLActionFactory:(id)arg2 ;
@end

