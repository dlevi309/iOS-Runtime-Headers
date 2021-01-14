/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setResultStatus:(long long)arg1 ;
-(FCCloudContext *)context;
-(NSString *)articleID;
-(long long)resultStatus;
-(void)setArticleID:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithContext:(id)arg1 articleID:(id)arg2 ;
-(void)setCheckStatusCompletion:(id)arg1 ;
-(id)checkStatusCompletion;
-(void)setContext:(FCCloudContext *)arg1 ;
@end

