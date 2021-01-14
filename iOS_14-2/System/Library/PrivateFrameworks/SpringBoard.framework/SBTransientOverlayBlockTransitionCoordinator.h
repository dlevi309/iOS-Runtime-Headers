/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBTransientOverlayTransitionCoordinating.h>

@class NSString;

@interface SBTransientOverlayBlockTransitionCoordinator : NSObject <SBTransientOverlayTransitionCoordinating> {

	/*^block*/id _startTransitionHandler;
	/*^block*/id _finalizeTransitionHandler;

}

@property (nonatomic,copy) id startTransitionHandler;                 //@synthesize startTransitionHandler=_startTransitionHandler - In the implementation block
@property (nonatomic,copy) id finalizeTransitionHandler;              //@synthesize finalizeTransitionHandler=_finalizeTransitionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStartTransitionHandler:(id)arg1 ;
-(void)setFinalizeTransitionHandler:(id)arg1 ;
-(void)finalizeTransitionWithContextProvider:(id)arg1 ;
-(void)startTransitionWithContextProvider:(id)arg1 ;
-(id)startTransitionHandler;
-(id)finalizeTransitionHandler;
@end

