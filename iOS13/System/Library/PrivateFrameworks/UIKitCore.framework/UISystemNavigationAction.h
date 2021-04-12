/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class NSArray;

@interface UISystemNavigationAction : BSAction {

	NSArray* _destinations;

}

@property (nonatomic,readonly) NSArray * destinations;              //@synthesize destinations=_destinations - In the implementation block
-(NSArray *)destinations;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(long long)UIActionType;
-(id)initWithDestinationContexts:(id)arg1 forResponseOnQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)_destinationContextForResponseDestination:(unsigned long long)arg1 ;
-(id)titleForDestination:(unsigned long long)arg1 ;
-(id)bundleIdForDestination:(unsigned long long)arg1 ;
-(id)URLForDestination:(unsigned long long)arg1 ;
-(id)sceneIdentifierForDestination:(unsigned long long)arg1 ;
-(BOOL)sendResponseForDestination:(unsigned long long)arg1 ;
@end

