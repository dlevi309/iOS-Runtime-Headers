/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBHardwareButtonGestureParametersProvider.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBHardwareButtonGestureParameters, NSMapTable, NSString;

@interface SBHardwareButtonGestureParametersProviderBase : NSObject <SBHardwareButtonGestureParametersProvider, BSDescriptionProviding> {

	NSMapTable* _observers;

}

@property (nonatomic,retain) NSMapTable * observers;                                                             //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SBHardwareButtonGestureParameters * hardwareButtonGestureParameters; 
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setObservers:(NSMapTable *)arg1 ;
-(NSMapTable *)observers;
-(void)addHardwareButtonGestureParametersObserver:(id)arg1 ;
-(SBHardwareButtonGestureParameters *)hardwareButtonGestureParameters;
-(void)publishUpdatedParameters:(id)arg1 ;
-(void)removeHardwareButtonGestureParametersObserver:(id)arg1 ;
@end

