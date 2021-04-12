/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(NSString *)protocolVersion;
-(void)setProgress:(double)arg1 ;
-(void)dealloc;
-(void)setProgressUpdateBlock:(id)arg1 ;
-(NSData *)authRequestData;
-(void)setRegistrationBlock:(id)arg1 ;
-(id)registrationBlock;
-(void)setAuthRequestData:(NSData *)arg1 ;
-(id)progressUpdateBlock;
@end

