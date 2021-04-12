/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)operationType;
-(NSString *)APIToken;
-(void)setAPIToken:(NSString *)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(void)setTokenFetchedBlock:(id)arg1 ;
-(id)tokenFetchedBlock;
@end

