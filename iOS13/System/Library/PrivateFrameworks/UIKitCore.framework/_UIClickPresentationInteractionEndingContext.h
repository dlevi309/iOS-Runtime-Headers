/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UIClickPresentation;

@interface _UIClickPresentationInteractionEndingContext : NSObject {

	BOOL _didComplete;
	unsigned long long _reason;
	_UIClickPresentation* _presentation;
	/*^block*/id _alongsideActions;
	/*^block*/id _completion;

}

@property (assign,nonatomic) BOOL didComplete;                                        //@synthesize didComplete=_didComplete - In the implementation block
@property (assign,nonatomic) unsigned long long reason;                               //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic,__weak) _UIClickPresentation * presentation;              //@synthesize presentation=_presentation - In the implementation block
@property (nonatomic,copy) id alongsideActions;                                       //@synthesize alongsideActions=_alongsideActions - In the implementation block
@property (nonatomic,copy) id completion;                                             //@synthesize completion=_completion - In the implementation block
-(unsigned long long)reason;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setReason:(unsigned long long)arg1 ;
-(void)setPresentation:(_UIClickPresentation *)arg1 ;
-(_UIClickPresentation *)presentation;
-(BOOL)didComplete;
-(void)setDidComplete:(BOOL)arg1 ;
-(id)alongsideActions;
-(void)setAlongsideActions:(id)arg1 ;
@end

