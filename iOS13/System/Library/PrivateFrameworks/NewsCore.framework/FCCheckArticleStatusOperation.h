/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, FCCloudContext, NSString;

@interface FCCheckArticleStatusOperation : FCOperation {

	/*^block*/id _checkStatusCompletion;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	FCCloudContext* _context;
	NSString* _articleID;
	long long _resultStatus;

}

@property (nonatomic,retain) FCCloudContext * context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * articleID;                            //@synthesize articleID=_articleID - In the implementation block
@property (assign,nonatomic) long long resultStatus;                        //@synthesize resultStatus=_resultStatus - In the implementation block
@property (copy) id checkStatusCompletion;                                  //@synthesize checkStatusCompletion=_checkStatusCompletion - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
-(FCCloudContext *)context;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setContext:(FCCloudContext *)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)performOperation;
-(long long)resultStatus;
-(void)setResultStatus:(long long)arg1 ;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(id)checkStatusCompletion;
-(id)initWithContext:(id)arg1 articleID:(id)arg2 ;
-(void)setCheckStatusCompletion:(id)arg1 ;
@end

