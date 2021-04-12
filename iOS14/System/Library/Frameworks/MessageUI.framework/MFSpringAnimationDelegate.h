/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSMutableArray;

@interface MFSpringAnimationDelegate : NSObject {

	NSMutableArray* _completionBlocks;

}

@property (nonatomic,readonly) NSMutableArray * completionBlocks;              //@synthesize completionBlocks=_completionBlocks - In the implementation block
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(NSMutableArray *)completionBlocks;
-(id)init;
@end

