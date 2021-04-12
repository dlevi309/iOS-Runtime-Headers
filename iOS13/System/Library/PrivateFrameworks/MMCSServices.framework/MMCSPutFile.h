/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
*/

#import <MMCSServices/MMCSSimpleFile.h>

@class NSString, NSData;

@interface MMCSPutFile : MMCSSimpleFile {

	/*^block*/id _block;
	/*^block*/id _updateBlock;
	NSString* _protocolVersion;
	NSData* _authRequestData;
	/*^block*/id _registrationBlock;

}

@property (copy) NSString * protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (copy) NSData * authRequestData;                //@synthesize authRequestData=_authRequestData - In the implementation block
@property (copy) id completionBlock;                      //@synthesize block=_block - In the implementation block
@property (copy) id progressUpdateBlock;                  //@synthesize updateBlock=_updateBlock - In the implementation block
@property (copy) id registrationBlock;                    //@synthesize registrationBlock=_registrationBlock - In the implementation block
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(NSString *)protocolVersion;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(void)setProgressUpdateBlock:(id)arg1 ;
-(NSData *)authRequestData;
-(void)setRegistrationBlock:(id)arg1 ;
-(id)registrationBlock;
-(void)setAuthRequestData:(NSData *)arg1 ;
-(id)progressUpdateBlock;
@end

