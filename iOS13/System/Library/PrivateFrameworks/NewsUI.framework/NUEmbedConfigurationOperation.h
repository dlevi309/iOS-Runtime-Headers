/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsCore/FCOperation.h>

@protocol FCNewsAppConfigurationManager;
@class FCFlintResourceManager, NUEmbedConfigurationOperationResult;

@interface NUEmbedConfigurationOperation : FCOperation {

	/*^block*/id _completion;
	id<FCNewsAppConfigurationManager> _appConfigurationManager;
	FCFlintResourceManager* _flintResourceManager;
	NUEmbedConfigurationOperationResult* _result;

}

@property (nonatomic,retain) id<FCNewsAppConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
@property (nonatomic,retain) FCFlintResourceManager * flintResourceManager;                          //@synthesize flintResourceManager=_flintResourceManager - In the implementation block
@property (nonatomic,retain) NUEmbedConfigurationOperationResult * result;                           //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) id completion;                                                            //@synthesize completion=_completion - In the implementation block
-(NUEmbedConfigurationOperationResult *)result;
-(void)setResult:(NUEmbedConfigurationOperationResult *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(FCFlintResourceManager *)flintResourceManager;
-(id)initWithAppConfigManager:(id)arg1 flintResourceManager:(id)arg2 ;
-(void)setAppConfigurationManager:(id<FCNewsAppConfigurationManager>)arg1 ;
-(void)setFlintResourceManager:(FCFlintResourceManager *)arg1 ;
@end

