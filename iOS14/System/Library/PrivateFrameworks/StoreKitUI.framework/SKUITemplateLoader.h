/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSArray, NSOperationQueue, NSRegularExpression, NSMutableArray, NSMutableDictionary;

@interface SKUITemplateLoader : NSObject {

	SKUITemplateLoader* _retainSelf;
	NSArray* _URLs;
	/*^block*/id _completionBlock;
	NSOperationQueue* _operationQueue;
	NSRegularExpression* _templateParsingRegularExpression;
	NSMutableArray* _errors;
	NSMutableDictionary* _templateStrings;
	long long _pendingOperationCount;

}

@property (nonatomic,readonly) NSOperationQueue * operationQueue;                                   //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * templateParsingRegularExpression;              //@synthesize templateParsingRegularExpression=_templateParsingRegularExpression - In the implementation block
@property (nonatomic,readonly) NSMutableArray * errors;                                             //@synthesize errors=_errors - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * templateStrings;                               //@synthesize templateStrings=_templateStrings - In the implementation block
@property (assign,nonatomic) long long pendingOperationCount;                                       //@synthesize pendingOperationCount=_pendingOperationCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * URLs;                                                 //@synthesize URLs=_URLs - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;                                             //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)load;
-(NSOperationQueue *)operationQueue;
-(id)completionBlock;
-(NSArray *)URLs;
-(NSMutableArray *)errors;
-(long long)pendingOperationCount;
-(void)setPendingOperationCount:(long long)arg1 ;
-(void)_operationDidFinish:(id)arg1 ;
-(id)initWithURLs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSRegularExpression *)templateParsingRegularExpression;
-(void)_operation:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_operation:(id)arg1 didCompleteWithOutput:(id)arg2 ;
-(NSMutableDictionary *)templateStrings;
-(id)_operationWithURL:(id)arg1 ;
@end

