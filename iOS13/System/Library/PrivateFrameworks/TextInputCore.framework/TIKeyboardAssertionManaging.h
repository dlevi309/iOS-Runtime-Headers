/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TIKeyboardAssertionManaging <NSObject>
@property (nonatomic,readonly) BOOL hasAssertions; 
@property (nonatomic,readonly) BOOL hasBackgroundActivityAssertions; 
@property (assign,nonatomic) id<TIKeyboardAssertionManagerDelegate> delegate; 
@required
-(id<TIKeyboardAssertionManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)hasAssertions;
-(void)releaseBackgroundActivityAssertion;
-(void)addAssertionForObject:(id)arg1;
-(void)removeAssertionForObject:(id)arg1;
-(void)retainBackgroundActivityAssertion;
-(BOOL)hasBackgroundActivityAssertions;

@end

