/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/

#import <libobjc.A.dylib/CUXPCCodable.h>

@class NSString, NSData;

@interface ENSignature : NSObject <CUXPCCodable> {

	unsigned _batchNumber;
	unsigned _batchCount;
	NSString* _appleBundleID;
	NSString* _androidBundleID;
	NSString* _keyID;
	NSString* _keyVersion;
	NSString* _signatureAlgorithm;
	NSData* _signatureData;

}

@property (nonatomic,copy) NSString * appleBundleID;                   //@synthesize appleBundleID=_appleBundleID - In the implementation block
@property (nonatomic,copy) NSString * androidBundleID;                 //@synthesize androidBundleID=_androidBundleID - In the implementation block
@property (assign,nonatomic) unsigned batchNumber;                     //@synthesize batchNumber=_batchNumber - In the implementation block
@property (assign,nonatomic) unsigned batchCount;                      //@synthesize batchCount=_batchCount - In the implementation block
@property (nonatomic,copy) NSString * keyID;                           //@synthesize keyID=_keyID - In the implementation block
@property (nonatomic,copy) NSString * keyVersion;                      //@synthesize keyVersion=_keyVersion - In the implementation block
@property (nonatomic,copy) NSString * signatureAlgorithm;              //@synthesize signatureAlgorithm=_signatureAlgorithm - In the implementation block
@property (nonatomic,copy) NSData * signatureData;                     //@synthesize signatureData=_signatureData - In the implementation block
-(void)encodeWithXPCObject:(id)arg1 ;
-(NSString *)keyID;
-(void)setKeyID:(NSString *)arg1 ;
-(id)initWithBytes:(const char*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)description;
-(NSData *)signatureData;
-(unsigned)batchNumber;
-(void)setSignatureData:(NSData *)arg1 ;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(unsigned)batchCount;
-(void)setBatchCount:(unsigned)arg1 ;
-(NSString *)keyVersion;
-(void)setKeyVersion:(NSString *)arg1 ;
-(BOOL)encodeWithProtobufCoder:(id)arg1 error:(id*)arg2 ;
-(BOOL)_readSignatureInfoPtr:(const char*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_encodeInfoWithProtobufCoder:(id)arg1 error:(id*)arg2 ;
-(NSString *)appleBundleID;
-(void)setAppleBundleID:(NSString *)arg1 ;
-(NSString *)androidBundleID;
-(void)setAndroidBundleID:(NSString *)arg1 ;
-(void)setBatchNumber:(unsigned)arg1 ;
-(NSString *)signatureAlgorithm;
-(void)setSignatureAlgorithm:(NSString *)arg1 ;
@end

