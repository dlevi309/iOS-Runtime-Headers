/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol WFChooseFromListIntentHandling <NSObject>
@optional
-(void)confirmChooseFromList:(id)arg1 completion:(/*^block*/id)arg2;
-(id)defaultChosenItemsForChooseFromList:(id)arg1;

@required
-(void)handleChooseFromList:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolvePromptForChooseFromList:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveChosenItemsForChooseFromList:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)provideChosenItemsOptionsForChooseFromList:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

