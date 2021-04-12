/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResult:(NUEmbedConfigurationOperationResult *)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setCompletion:(id)arg1 ;
-(FCFlintResourceManager *)flintResourceManager;
-(void)setAppConfigurationManager:(id<FCNewsAppConfigurationManager>)arg1 ;
-(id)completion;
-(NUEmbedConfigurationOperationResult *)result;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(id)initWithAppConfigManager:(id)arg1 flintResourceManager:(id)arg2 ;
-(void)setFlintResourceManager:(FCFlintResourceManager *)arg1 ;
@end

