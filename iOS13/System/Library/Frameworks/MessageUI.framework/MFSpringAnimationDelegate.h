/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSMutableArray;

@interface MFSpringAnimationDelegate : NSObject {

	NSMutableArray* _completionBlocks;

}

@property (nonatomic,readonly) NSMutableArray * completionBlocks;              //@synthesize completionBlocks=_completionBlocks - In the implementation block
-(id)init;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(NSMutableArray *)completionBlocks;
@end

