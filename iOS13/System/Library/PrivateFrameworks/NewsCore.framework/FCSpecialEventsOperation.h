/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration;
@class FCCloudContext, FCSpecialEventsOperationResult, NSError;

@interface FCSpecialEventsOperation : FCOperation {

	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	FCSpecialEventsOperationResult* _specialEventsResult;
	NSError* _error;
	/*^block*/id _catchUpCompletionHandler;

}

@property (retain) FCSpecialEventsOperationResult * specialEventsResult;              //@synthesize specialEventsResult=_specialEventsResult - In the implementation block
@property (retain) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                     //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                                //@synthesize context=_context - In the implementation block
@property (copy) id catchUpCompletionHandler;                                         //@synthesize catchUpCompletionHandler=_catchUpCompletionHandler - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(FCCloudContext *)context;
-(void)setContext:(FCCloudContext *)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)catchUpCompletionHandler;
-(void)setCatchUpCompletionHandler:(id)arg1 ;
-(void)setSpecialEventsResult:(FCSpecialEventsOperationResult *)arg1 ;
-(void)_checkShouldShowBreakingNewsWithCompletionHandler:(/*^block*/id)arg1 ;
-(FCSpecialEventsOperationResult *)specialEventsResult;
@end

