/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol WFSplitTextIntentHandling <NSObject>
@optional
-(void)confirmSplitText:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)handleSplitText:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveTextForSplitText:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveSeparatorForSplitText:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveCustomSeparatorForSplitText:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

