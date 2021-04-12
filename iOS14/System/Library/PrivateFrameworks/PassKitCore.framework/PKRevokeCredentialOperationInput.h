/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSURL, NSError;

@interface PKRevokeCredentialOperationInput : NSObject {

	NSURL* _passURL;
	NSError* _error;

}

@property (nonatomic,copy) NSURL * passURL;                //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(NSURL *)passURL;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setPassURL:(NSURL *)arg1 ;
@end

