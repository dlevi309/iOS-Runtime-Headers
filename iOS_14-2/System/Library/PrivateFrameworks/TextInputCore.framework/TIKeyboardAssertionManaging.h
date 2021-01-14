/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TIKeyboardAssertionManaging <NSObject>
@property (nonatomic,readonly) BOOL hasAssertions; 
@property (nonatomic,readonly) BOOL hasBackgroundActivityAssertions; 
@property (assign,nonatomic) id<TIKeyboardAssertionManagerDelegate> delegate; 
@required
-(id<TIKeyboardAssertionManagerDelegate>)delegate;
-(void)retainBackgroundActivityAssertion;
-(BOOL)hasBackgroundActivityAssertions;
-(void)addAssertionForObject:(id)arg1;
-(void)setDelegate:(id)arg1;
-(BOOL)hasAssertions;
-(void)releaseBackgroundActivityAssertion;
-(void)removeAssertionForObject:(id)arg1;

@end

