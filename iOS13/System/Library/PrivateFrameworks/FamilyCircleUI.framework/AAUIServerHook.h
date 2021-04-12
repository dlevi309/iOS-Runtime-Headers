/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

@class AAUIServerHookResponse;


@protocol AAUIServerHook <NSObject>
@property (nonatomic,retain) AAUIServerHookResponse * serverHookResponse; 
@property (assign,nonatomic,__weak) id<AAUIServerHookDelegate> delegate; 
@optional
-(void)harvestDataFromResponse:(id)arg1;
-(AAUIServerHookResponse *)serverHookResponse;
-(void)setServerHookResponse:(id)arg1;

@required
-(id<AAUIServerHookDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)shouldMatchElement:(id)arg1;
-(BOOL)shouldMatchModel:(id)arg1;
-(void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(/*^block*/id)arg4;
-(void)processObjectModel:(id)arg1 completion:(/*^block*/id)arg2;

@end

