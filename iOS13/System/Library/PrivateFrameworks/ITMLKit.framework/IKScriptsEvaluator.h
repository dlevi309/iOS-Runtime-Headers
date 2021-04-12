/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class NSArray, IKAppContext, JSManagedValue, NSMutableArray, NSString, NSNumber;

@interface IKScriptsEvaluator : NSObject <ISStoreURLOperationDelegate, NSURLConnectionDataDelegate> {

	BOOL _isJingleRequest;
	NSArray* _scripts;
	IKAppContext* _appContext;
	JSManagedValue* _callback;
	NSMutableArray* _records;
	NSString* _identifier;

}

@property (assign,nonatomic) BOOL isJingleRequest;                                                      //@synthesize isJingleRequest=_isJingleRequest - In the implementation block
@property (nonatomic,retain) NSArray * scripts;                                                         //@synthesize scripts=_scripts - In the implementation block
@property (assign,nonatomic,__weak) IKAppContext * appContext;                                          //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,retain) JSManagedValue * callback;                                                 //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSMutableArray * records;                                                  //@synthesize records=_records - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(JSManagedValue *)callback;
-(void)setCallback:(JSManagedValue *)arg1 ;
-(NSMutableArray *)records;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(NSArray *)scripts;
-(void)evaluate;
-(IKAppContext *)appContext;
-(id)initWithScripts:(id)arg1 withContext:(id)arg2 callback:(id)arg3 jingleRequest:(BOOL)arg4 ;
-(void)_sendCallback:(id)arg1 inContext:(id)arg2 success:(BOOL)arg3 ;
-(void)scriptDidLoadWithID:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(void)_operation:(id)arg1 finishedWithResult:(id)arg2 error:(id)arg3 ;
-(void)handleScirptLoadFailure;
-(void)evaluateScripts;
-(void)parseScriptData:(id)arg1 successPredicate:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(BOOL)isJingleRequest;
-(void)setIsJingleRequest:(BOOL)arg1 ;
-(void)setScripts:(NSArray *)arg1 ;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(void)setRecords:(NSMutableArray *)arg1 ;
@end

