/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SWNavigationHandler.h>

@protocol SXActionProvider, SXActionManager;
@class NSString;

@interface SXWebContentActionNavigationHandler : NSObject <SWNavigationHandler> {

	id<SXActionProvider> _actionProvider;
	id<SXActionManager> _actionManager;

}

@property (nonatomic,readonly) id<SXActionProvider> actionProvider;              //@synthesize actionProvider=_actionProvider - In the implementation block
@property (nonatomic,readonly) id<SXActionManager> actionManager;                //@synthesize actionManager=_actionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXActionProvider>)actionProvider;
-(id<SXActionManager>)actionManager;
-(unsigned long long)handleRequest:(id)arg1 ;
-(id)initWithActionProvider:(id)arg1 actionManager:(id)arg2 ;
@end

