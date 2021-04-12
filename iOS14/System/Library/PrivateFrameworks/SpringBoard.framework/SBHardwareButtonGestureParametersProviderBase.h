/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBHardwareButtonGestureParametersProvider.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBHardwareButtonGestureParameters, NSMapTable, NSString;

@interface SBHardwareButtonGestureParametersProviderBase : NSObject <SBHardwareButtonGestureParametersProvider, BSDescriptionProviding> {

	NSMapTable* _observers;

}

@property (nonatomic,retain) NSMapTable * observers;                                                             //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) SBHardwareButtonGestureParameters * hardwareButtonGestureParameters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(NSMapTable *)observers;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBHardwareButtonGestureParameters *)hardwareButtonGestureParameters;
-(NSString *)description;
-(void)setObservers:(NSMapTable *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)addHardwareButtonGestureParametersObserver:(id)arg1 ;
-(void)publishUpdatedParameters:(id)arg1 ;
-(void)removeHardwareButtonGestureParametersObserver:(id)arg1 ;
@end

