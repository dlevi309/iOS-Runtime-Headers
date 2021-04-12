/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)receiveObservedValue:(id)arg1 ;
-(void)_reset;
-(void)setCompletesAtTargetState:(BOOL)arg1 ;
-(BOOL)completesAtTargetState;
@end

