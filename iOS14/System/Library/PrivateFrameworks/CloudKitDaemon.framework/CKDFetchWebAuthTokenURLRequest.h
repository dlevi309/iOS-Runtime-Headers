/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString;

@interface CKDFetchWebAuthTokenURLRequest : CKDURLRequest {

	NSString* _APIToken;
	/*^block*/id _tokenFetchedBlock;

}

@property (nonatomic,copy) NSString * APIToken;               //@synthesize APIToken=_APIToken - In the implementation block
@property (nonatomic,copy) id tokenFetchedBlock;              //@synthesize tokenFetchedBlock=_tokenFetchedBlock - In the implementation block
-(NSString *)APIToken;
-(void)setAPIToken:(NSString *)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)generateRequestOperations;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)setTokenFetchedBlock:(id)arg1 ;
-(id)tokenFetchedBlock;
@end

