/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
*/

@class AAUIServerHookResponse, RUIObjectModel;


@protocol AAUIServerHook <NSObject>
@property (nonatomic,retain) AAUIServerHookResponse * serverHookResponse; 
@property (nonatomic,retain) RUIObjectModel * objectModel; 
@property (assign,nonatomic,__weak) id<AAUIServerHookDelegate> delegate; 
@optional
-(RUIObjectModel *)objectModel;
-(void)harvestDataFromResponse:(id)arg1;
-(AAUIServerHookResponse *)serverHookResponse;
-(void)setServerHookResponse:(id)arg1;
-(void)setObjectModel:(id)arg1;

@required
-(id<AAUIServerHookDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)shouldMatchElement:(id)arg1;
-(BOOL)shouldMatchModel:(id)arg1;
-(void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(/*^block*/id)arg4;
-(void)processObjectModel:(id)arg1 completion:(/*^block*/id)arg2;

@end

