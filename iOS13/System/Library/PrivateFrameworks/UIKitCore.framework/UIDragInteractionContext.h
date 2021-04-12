/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSArray;


@protocol UIDragInteractionContext <UIInteractionContext>
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) BOOL shouldAnimateLift; 
@property (nonatomic,readonly) id animations; 
@property (nonatomic,readonly) id completion; 
@required
-(long long)state;
-(id)animations;
-(id)completion;
-(NSArray *)items;
-(BOOL)shouldAnimateLift;

@end

