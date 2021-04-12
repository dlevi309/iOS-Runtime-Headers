/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/


@protocol BFFNavigationControllerDelegate;
@interface BFFNavigationObserver : NSObject {

	id<BFFNavigationControllerDelegate> _observer;

}

@property (assign,nonatomic,__weak) id<BFFNavigationControllerDelegate> observer;              //@synthesize observer=_observer - In the implementation block
+(id)observerWithObserver:(id)arg1 ;
-(void)setObserver:(id<BFFNavigationControllerDelegate>)arg1 ;
-(id<BFFNavigationControllerDelegate>)observer;
@end

