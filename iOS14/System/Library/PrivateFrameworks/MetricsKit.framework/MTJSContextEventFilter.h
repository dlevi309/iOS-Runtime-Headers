/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <libobjc.A.dylib/MTEventFilter.h>

@class NSString, JSContext, NSError, NSOperationQueue;

@interface MTJSContextEventFilter : NSObject <MTEventFilter> {

	NSString* _script;
	NSString* _functionName;
	JSContext* _jsContext;
	NSError* _lastError;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSString * script;                              //@synthesize script=_script - In the implementation block
@property (nonatomic,retain) NSString * functionName;                        //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,retain) JSContext * jsContext;                          //@synthesize jsContext=_jsContext - In the implementation block
@property (nonatomic,retain) NSError * lastError;                            //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSError *)lastError;
-(NSOperationQueue *)operationQueue;
-(NSString *)script;
-(id)apply:(id)arg1 ;
-(NSString *)functionName;
-(void)setScript:(NSString *)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(void)setLastError:(NSError *)arg1 ;
-(JSContext *)jsContext;
-(void)setJsContext:(JSContext *)arg1 ;
-(id)initWithJSContext:(id)arg1 functionName:(id)arg2 operationQueue:(id)arg3 ;
-(void)_applyFilter:(id)arg1 promise:(id)arg2 ;
-(id)initWithScript:(id)arg1 functionName:(id)arg2 operationQueue:(id)arg3 ;
@end

