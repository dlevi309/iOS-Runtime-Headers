/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIInteractionProgress.h>
#import <libobjc.A.dylib/NSObservable.h>
#import <libobjc.A.dylib/NSObserver.h>

@class NSObservation, NSString;

@interface UIForceStageInteractionProgress : UIInteractionProgress <NSObservable, NSObserver> {

	NSObservation* _observation;
	BOOL _completed;
	BOOL _started;
	BOOL _completesAtTargetState;

}

@property (assign,nonatomic) BOOL completesAtTargetState;              //@synthesize completesAtTargetState=_completesAtTargetState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)receiveObservedValue:(id)arg1 ;
-(id)init;
-(BOOL)completesAtTargetState;
-(void)_reset;
-(void)dealloc;
-(void)setCompletesAtTargetState:(BOOL)arg1 ;
@end

