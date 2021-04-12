/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol WFChooseFromListIntentHandling <NSObject>
@optional
-(void)confirmChooseFromList:(id)arg1 completion:(/*^block*/id)arg2;
-(id)defaultChosenItemsForChooseFromList:(id)arg1;
-(void)provideChosenItemsOptionsForChooseFromList:(id)arg1 withCompletion:(/*^block*/id)arg2;

@required
-(void)handleChooseFromList:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolvePromptForChooseFromList:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveChosenItemsForChooseFromList:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)provideChosenItemsOptionsCollectionForChooseFromList:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

