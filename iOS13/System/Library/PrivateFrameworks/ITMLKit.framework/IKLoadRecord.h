/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)URL;
-(NSURLSessionDataTask *)dataTask;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
-(NSUUID *)requestID;
-(void)setRequestID:(NSUUID *)arg1 ;
-(ISURLOperation *)opertaion;
-(void)setOpertaion:(ISURLOperation *)arg1 ;
-(BOOL)loadCompleted;
-(void)setLoadCompleted:(BOOL)arg1 ;
-(NSString *)scriptStr;
-(void)setScriptStr:(NSString *)arg1 ;
@end

