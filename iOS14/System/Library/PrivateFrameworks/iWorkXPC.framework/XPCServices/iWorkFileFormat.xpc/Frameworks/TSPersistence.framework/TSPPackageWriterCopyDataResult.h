/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSPCryptoInfo;
@class NSString;

@interface TSPPackageWriterCopyDataResult : NSObject {

	NSString* _filename;
	id<TSPCryptoInfo> _encryptionInfo;
	unsigned long long _encodedLength;

}

@property (nonatomic,readonly) NSString * filename;                           //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) id<TSPCryptoInfo> encryptionInfo;              //@synthesize encryptionInfo=_encryptionInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long encodedLength;              //@synthesize encodedLength=_encodedLength - In the implementation block
-(id)init;
-(unsigned long long)encodedLength;
-(NSString *)filename;
-(id<TSPCryptoInfo>)encryptionInfo;
-(id)initWithFilename:(id)arg1 encryptionInfo:(id)arg2 encodedLength:(unsigned long long)arg3 ;
@end

