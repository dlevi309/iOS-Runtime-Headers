/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class NSData, ICStoreRequestContext;

@interface ICMachineDataOperation : ICAsyncOperation {

	NSData* _data;
	ICStoreRequestContext* _requestContext;
	long long _protocolVersion;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) NSData * data;                                       //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (assign,nonatomic) long long protocolVersion;                           //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,copy) id completionHandler;                                  //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(void)setProtocolVersion:(long long)arg1 ;
-(long long)protocolVersion;
-(ICStoreRequestContext *)requestContext;
-(id)completionHandler;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
@end

