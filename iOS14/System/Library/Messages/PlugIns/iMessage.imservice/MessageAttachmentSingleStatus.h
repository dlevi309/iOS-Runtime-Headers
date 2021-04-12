/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/


@class NSError, NSString;

@interface MessageAttachmentSingleStatus : NSObject {

	NSError* _transferError;
	NSString* _additionalErrorInfo;
	NSString* _errorURLString;
	long long _errorFileSize;

}

@property (retain) NSError * transferError;                     //@synthesize transferError=_transferError - In the implementation block
@property (retain) NSString * additionalErrorInfo;              //@synthesize additionalErrorInfo=_additionalErrorInfo - In the implementation block
@property (retain) NSString * errorURLString;                   //@synthesize errorURLString=_errorURLString - In the implementation block
@property (assign) long long errorFileSize;                     //@synthesize errorFileSize=_errorFileSize - In the implementation block
-(NSError *)transferError;
-(void)setTransferError:(NSError *)arg1 ;
-(NSString *)additionalErrorInfo;
-(void)setAdditionalErrorInfo:(NSString *)arg1 ;
-(NSString *)errorURLString;
-(void)setErrorURLString:(NSString *)arg1 ;
-(long long)errorFileSize;
-(void)setErrorFileSize:(long long)arg1 ;
@end

