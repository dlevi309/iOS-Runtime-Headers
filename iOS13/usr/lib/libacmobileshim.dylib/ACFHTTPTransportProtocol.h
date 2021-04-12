/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

@class NSString, NSArray, NSDictionary, NSData;


@protocol ACFHTTPTransportProtocol <NSObject>
@property (nonatomic,retain) NSString * requestURLTemplate; 
@property (nonatomic,retain) NSArray * serverHosts; 
@property (nonatomic,retain) NSArray * serverAttemptsDelays; 
@property (nonatomic,retain) NSString * httpMethod; 
@property (nonatomic,retain) NSDictionary * httpHeader; 
@property (nonatomic,retain) NSDictionary * httpGETParameters; 
@property (nonatomic,retain) NSData * httpPOSTBody; 
@property (assign,nonatomic) double timeout; 
@property (assign,nonatomic) BOOL isCanceled; 
@property (nonatomic,copy) id retryCheckBlock; 
@required
-(double)timeout;
-(void)setTimeout:(double)arg1;
-(BOOL)isCanceled;
-(void)cancelRequest;
-(void)setIsCanceled:(BOOL)arg1;
-(NSString *)httpMethod;
-(void)setHttpMethod:(id)arg1;
-(void)setRetryCheckBlock:(/*^block*/id)arg1;
-(void)setRequestURLTemplate:(id)arg1;
-(void)setHttpHeader:(id)arg1;
-(void)setHttpGETParameters:(id)arg1;
-(void)setHttpPOSTBody:(id)arg1;
-(void)setServerHosts:(id)arg1;
-(void)setServerAttemptsDelays:(id)arg1;
-(id)retryCheckBlock;
-(NSArray *)serverHosts;
-(NSDictionary *)httpHeader;
-(NSData *)httpPOSTBody;
-(NSString *)requestURLTemplate;
-(NSDictionary *)httpGETParameters;
-(NSArray *)serverAttemptsDelays;
-(void)performRequestWithCompletionBlock:(/*^block*/id)arg1;

@end

