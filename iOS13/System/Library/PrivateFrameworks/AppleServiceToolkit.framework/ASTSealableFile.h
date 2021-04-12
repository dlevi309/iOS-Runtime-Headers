/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/


@class NSURL, NSString, NSData;

@interface ASTSealableFile : NSObject {

	NSURL* _fileURL;
	BOOL _sealed;
	NSString* _base64Signature;
	NSData* _signature;

}

@property (nonatomic,retain) NSString * base64Signature;               //@synthesize base64Signature=_base64Signature - In the implementation block
@property (nonatomic,retain) NSData * signature;                       //@synthesize signature=_signature - In the implementation block
@property (assign,getter=isSealed,nonatomic) BOOL sealed;              //@synthesize sealed=_sealed - In the implementation block
@property (nonatomic,retain) NSURL * fileURL; 
+(id)sealedFileURL:(id)arg1 signature:(id)arg2 ;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSData *)signature;
-(id)initWithFileURL:(id)arg1 signature:(id)arg2 ;
-(void)setSignature:(NSData *)arg1 ;
-(NSString *)base64Signature;
-(BOOL)isSealed;
-(BOOL)sealWithFileSigner:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)setBase64Signature:(NSString *)arg1 ;
-(void)setSealed:(BOOL)arg1 ;
@end

