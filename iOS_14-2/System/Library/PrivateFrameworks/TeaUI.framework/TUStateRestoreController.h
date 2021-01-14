/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <libobjc.A.dylib/TUStateRestoreControllerType.h>

@interface TUStateRestoreController : NSObject <TUStateRestoreControllerType> {

	 timeWindow;
	 store;
	 anyNavigationHappenAfterBackground;
	 isStateRestorationFeatureEnabled;
	 hasStateDiscarded;

}

@property (readonly,nonatomic) BOOL isStateRestorationFeatureEnabled; 
@property (readonly,nonatomic) BOOL isStateRestorationAllowed; 
@property (assign,nonatomic) BOOL hasStateDiscarded; 
-(id)init;
-(void)sceneDidEnterBackground;
-(BOOL)isStateRestorationFeatureEnabled;
-(BOOL)isStateRestorationAllowed;
-(BOOL)hasStateDiscarded;
-(void)setHasStateDiscarded:(BOOL)arg1 ;
-(id)initWithTimeWindow:(double)arg1 isStateRestorationEnabled:(BOOL)arg2 ;
-(id)initWithTimeWindow:(double)arg1 isRunningPPT:(BOOL)arg2 ;
-(void)markStateDiscarded;
-(void)navigationDidHappen;
@end

