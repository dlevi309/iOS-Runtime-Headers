/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSURL, ISURLOperation, NSString, NSUUID, NSURLSessionDataTask;

@interface IKLoadRecord : NSObject {

	BOOL _loadCompleted;
	NSURL* _URL;
	ISURLOperation* _opertaion;
	NSString* _scriptStr;
	NSUUID* _requestID;
	NSURLSessionDataTask* _dataTask;

}

@property (nonatomic,retain) NSURL * URL;                                  //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) ISURLOperation * opertaion;                   //@synthesize opertaion=_opertaion - In the implementation block
@property (assign,nonatomic) BOOL loadCompleted;                           //@synthesize loadCompleted=_loadCompleted - In the implementation block
@property (nonatomic,retain) NSString * scriptStr;                         //@synthesize scriptStr=_scriptStr - In the implementation block
@property (nonatomic,retain) NSUUID * requestID;                           //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * dataTask;              //@synthesize dataTask=_dataTask - In the implementation block
-(void)setURL:(NSURL *)arg1 ;
-(NSUUID *)requestID;
-(NSURLSessionDataTask *)dataTask;
-(NSURL *)URL;
-(void)setRequestID:(NSUUID *)arg1 ;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
-(ISURLOperation *)opertaion;
-(void)setOpertaion:(ISURLOperation *)arg1 ;
-(BOOL)loadCompleted;
-(void)setLoadCompleted:(BOOL)arg1 ;
-(NSString *)scriptStr;
-(void)setScriptStr:(NSString *)arg1 ;
@end

