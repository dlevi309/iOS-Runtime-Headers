/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol NPKPassesDataSourceObserver <NSObject>
@optional
-(void)passesDataSource:(id)arg1 didUpdateSettingsForPass:(id)arg2;

@required
-(void)passesDataSource:(id)arg1 didAddPasses:(id)arg2;
-(void)passesDataSourceDidReorderPasses:(id)arg1;
-(void)passesDataSource:(id)arg1 didRemovePasses:(id)arg2;
-(void)passesDataSource:(id)arg1 didUpdatePasses:(id)arg2;
-(void)passesDataSourceDidReloadPasses:(id)arg1;

@end

